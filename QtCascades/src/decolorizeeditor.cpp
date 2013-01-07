#include <float.h>

#include <QtCore/qmath.h>
#include <QtCore/QFileInfo>
#include <QtCore/QDir>
#include <QtCore/QThread>
#include <QtGui/QImageReader>

#include "decolorizeeditor.h"

DecolorizeEditor::DecolorizeEditor() : bb::cascades::CustomControl()
{
	IsChanged   = false;
    CurrentMode = ModeScroll;
}

DecolorizeEditor::~DecolorizeEditor()
{
}

int DecolorizeEditor::mode() const
{
	return CurrentMode;
}

void DecolorizeEditor::setMode(const int &mode)
{
	CurrentMode = mode;
}

bool DecolorizeEditor::changed() const
{
	return IsChanged;
}

void DecolorizeEditor::openImage(const QString &image_file)
{
    QImageReader reader(image_file);

    if (reader.canRead()) {
        QSize size = reader.size();

        if (size.width() * size.height() > IMAGE_MPIX_LIMIT * 1000000.0) {
            qreal factor = qSqrt((size.width() * size.height()) / (IMAGE_MPIX_LIMIT * 1000000.0));

            size.setWidth(size.width()   / factor);
            size.setHeight(size.height() / factor);

            reader.setScaledSize(size);
        }

        LoadedImage = reader.read();

        if (!LoadedImage.isNull()) {
            LoadedImage = LoadedImage.convertToFormat(QImage::Format_RGB16);

            if (!LoadedImage.isNull()) {
            	QThread                 *thread    = new QThread();
            	GrayscaleImageGenerator *generator = new GrayscaleImageGenerator();

            	generator->moveToThread(thread);

            	QObject::connect(thread,    SIGNAL(started()),                  generator, SLOT(start()));
            	QObject::connect(thread,    SIGNAL(finished()),                 thread,    SLOT(deleteLater()));
            	QObject::connect(generator, SIGNAL(imageReady(const QImage &)), this,      SLOT(effectedImageReady(const QImage &)));
            	QObject::connect(generator, SIGNAL(finished()),                 thread,    SLOT(quit()));
            	QObject::connect(generator, SIGNAL(finished()),                 generator, SLOT(deleteLater()));

            	generator->setInput(LoadedImage);

            	thread->start();
            } else {
                emit imageOpenFailed();
            }
        } else {
            emit imageOpenFailed();
        }
    } else {
        emit imageOpenFailed();
    }
}

void DecolorizeEditor::saveImage(const QString &image_file)
{
	QString file_name = image_file;

    if (!CurrentImage.isNull()) {
        if (QFileInfo(file_name).suffix().compare("png", Qt::CaseInsensitive) != 0 &&
            QFileInfo(file_name).suffix().compare("jpg", Qt::CaseInsensitive) != 0 &&
            QFileInfo(file_name).suffix().compare("bmp", Qt::CaseInsensitive) != 0) {
        	file_name = file_name + ".jpg";
        }

        if (CurrentImage.convertToFormat(QImage::Format_ARGB32).save(file_name)) {
        	IsChanged = false;

            emit imageSaved();
        } else {
            emit imageSaveFailed();
        }
    } else {
        emit imageSaveFailed();
    }
}

void DecolorizeEditor::changeImageAt(bool save_undo, int center_x, int center_y, double zoom_level)
{
	if (CurrentMode != ModeScroll) {
		if (save_undo) {
			SaveUndoImage();
		}

	    int radius = isnan(zoom_level) ? BRUSH_SIZE : BRUSH_SIZE / zoom_level;

	    for (int x = center_x - radius; x <= center_x + radius; x++) {
	        for (int y = center_y - radius; y <= center_y + radius; y++) {
	            if (x >= 0 && x < CurrentImage.width() && y >= 0 && y < CurrentImage.height() && qSqrt(qPow(x - center_x, 2) + qPow(y - center_y, 2)) <= radius) {
	                if (CurrentMode == ModeOriginal) {
	                    CurrentImage.setPixel(x, y, OriginalImage.pixel(x, y));
	                } else {
	                	CurrentImage.setPixel(x, y, EffectedImage.pixel(x, y));
	                }
	            }
	        }
	    }

	    IsChanged = true;

	    Repaint(false, QRect(center_x - radius, center_y - radius, radius * 2, radius * 2));
	}
}

void DecolorizeEditor::undo()
{
    if (UndoStack.size() > 0) {
        CurrentImage = UndoStack.pop();

        if (UndoStack.size() == 0) {
        	emit undoAvailabilityChanged(false);
        }

        IsChanged = true;

        Repaint(true);
    }
}

void DecolorizeEditor::effectedImageReady(const QImage &effected_image)
{
	OriginalImage = LoadedImage;
	EffectedImage = effected_image;
	CurrentImage  = EffectedImage;

    LoadedImage = QImage();

    UndoStack.clear();

    IsChanged = true;

    Repaint(true);

    emit undoAvailabilityChanged(false);
    emit imageOpened();
}

void DecolorizeEditor::SaveUndoImage()
{
    UndoStack.push(CurrentImage);

    if (UndoStack.size() > UNDO_DEPTH) {
        for (int i = 0; i < UndoStack.size() - UNDO_DEPTH; i++) {
            UndoStack.remove(0);
        }
    }

    emit undoAvailabilityChanged(true);
}

void DecolorizeEditor::Repaint(bool full, QRect rect)
{
	if (CurrentImage.isNull()) {
		CurrentImageData = bb::ImageData();

		emit needRepaint(bb::cascades::Image());
	} else if (full) {
		CurrentImageData = bb::ImageData(bb::PixelFormat::RGBA_Premultiplied, CurrentImage.width(), CurrentImage.height());

		unsigned char *dst_line = CurrentImageData.pixels();

		for (int y = 0; y < CurrentImageData.height(); y++) {
			unsigned char *dst = dst_line;

			for (int x = 0; x < CurrentImageData.width(); x++) {
				QRgb pixel = CurrentImage.pixel(x, y);

				*dst++ = qRed(pixel);
				*dst++ = qGreen(pixel);
				*dst++ = qBlue(pixel);
				*dst++ = qAlpha(pixel);
			}

			dst_line += CurrentImageData.bytesPerLine();
		}

		emit needRepaint(bb::cascades::Image(CurrentImageData));
	} else {
		unsigned char *dst_line = CurrentImageData.pixels();

		dst_line += rect.y() * CurrentImageData.bytesPerLine();

		for (int y = rect.y(); y < rect.y() + rect.height() && y < CurrentImageData.height(); y++) {
			unsigned char *dst = dst_line;

			dst += rect.x() * 4;

			for (int x = rect.x(); x < rect.x() + rect.width() && x < CurrentImageData.width(); x++) {
				QRgb pixel = CurrentImage.pixel(x, y);

				*dst++ = qRed(pixel);
				*dst++ = qGreen(pixel);
				*dst++ = qBlue(pixel);
				*dst++ = qAlpha(pixel);
			}

			dst_line += CurrentImageData.bytesPerLine();
		}

		emit needRepaint(bb::cascades::Image(CurrentImageData));
	}
}

GrayscaleImageGenerator::GrayscaleImageGenerator(QObject *parent) : QObject(parent)
{
}

GrayscaleImageGenerator::~GrayscaleImageGenerator()
{
}

void GrayscaleImageGenerator::setInput(const QImage &input_image)
{
	InputImage = input_image;
}

void GrayscaleImageGenerator::start()
{
    QImage grayscale_image = InputImage;

    for (int x = 0; x < grayscale_image.width(); x++) {
        for (int y = 0; y < grayscale_image.height(); y++) {
            int gray  = qGray(grayscale_image.pixel(x, y));
            int alpha = qAlpha(grayscale_image.pixel(x, y));

            grayscale_image.setPixel(x, y, qRgba(gray, gray, gray, alpha));
        }
    }

    emit imageReady(grayscale_image);
    emit finished();
}
