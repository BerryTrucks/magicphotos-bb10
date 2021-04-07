/****************************************************************************
** Meta object code from reading C++ file 'pixelateeditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/pixelateeditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pixelateeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PixelateEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       9,   84, // properties
       1,  111, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      30,   15,   15,   15, 0x05,
      48,   15,   15,   15, 0x05,
      61,   15,   15,   15, 0x05,
      89,   79,   15,   15, 0x05,
     155,  119,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     200,  185,   15,   15, 0x0a,

 // methods: signature, parameters, type, tag, flags
     238,  227,   15,   15, 0x02,
     257,  227,   15,   15, 0x02,
     304,  276,   15,   15, 0x02,
     332,   15,   15,   15, 0x02,
     352,  339,   15,   15, 0x02,
     402,  398,   15,   15, 0x02,
     439,   15,  423,   15, 0x02,

 // properties: name, type, flags
     458,  454, 0x02095103,
     463,  454, 0x02095103,
     473,  454, 0x02095103,
     484,  454, 0x02095103,
     499,  493, ((uint)QMetaType::QReal << 24) | 0x00095103,
     512,  493, ((uint)QMetaType::QReal << 24) | 0x00095103,
     518,  493, ((uint)QMetaType::QReal << 24) | 0x00095103,
     559,  534, 0x0009510b,
     571,  566, 0x01095001,

 // enums: name, flags, count, data
     579, 0x0,    3,  115,

 // enum data: key, value
     584, uint(PixelateEditor::ModeScroll),
     595, uint(PixelateEditor::ModeOriginal),
     608, uint(PixelateEditor::ModeEffected),

       0        // eod
};

static const char qt_meta_stringdata_PixelateEditor[] = {
    "PixelateEditor\0\0imageOpened()\0"
    "imageOpenFailed()\0imageSaved()\0"
    "imageSaveFailed()\0available\0"
    "undoAvailabilityChanged(bool)\0"
    "fragmentSize,imageWidth,imageHeight\0"
    "prepareFragments(int,int,int)\0"
    "effected_image\0effectedImageReady(QImage)\0"
    "image_file\0openImage(QString)\0"
    "saveImage(QString)\0save_undo,center_x,center_y\0"
    "changeImageAt(bool,int,int)\0undo()\0"
    "x,y,fragment\0addFragment(int,int,bb::cascades::ImageView*)\0"
    "x,y\0delFragment(int,int)\0QList<QObject*>\0"
    "getFragments()\0int\0mode\0brushSize\0"
    "helperSize\0pixDenom\0qreal\0brushOpacity\0"
    "scale\0resolutionLimit\0bb::cascades::ImageView*\0"
    "helper\0bool\0changed\0Mode\0ModeScroll\0"
    "ModeOriginal\0ModeEffected\0"
};

void PixelateEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PixelateEditor *_t = static_cast<PixelateEditor *>(_o);
        switch (_id) {
        case 0: _t->imageOpened(); break;
        case 1: _t->imageOpenFailed(); break;
        case 2: _t->imageSaved(); break;
        case 3: _t->imageSaveFailed(); break;
        case 4: _t->undoAvailabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->prepareFragments((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->effectedImageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 7: _t->openImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->saveImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->changeImageAt((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->undo(); break;
        case 11: _t->addFragment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bb::cascades::ImageView*(*)>(_a[3]))); break;
        case 12: _t->delFragment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: { QList<QObject*> _r = _t->getFragments();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PixelateEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PixelateEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_PixelateEditor,
      qt_meta_data_PixelateEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PixelateEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PixelateEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PixelateEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PixelateEditor))
        return static_cast<void*>(const_cast< PixelateEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PixelateEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = mode(); break;
        case 1: *reinterpret_cast< int*>(_v) = brushSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = helperSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = pixDenom(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = brushOpacity(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = resolutionLimit(); break;
        case 7: *reinterpret_cast< bb::cascades::ImageView**>(_v) = helper(); break;
        case 8: *reinterpret_cast< bool*>(_v) = changed(); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< int*>(_v)); break;
        case 1: setBrushSize(*reinterpret_cast< int*>(_v)); break;
        case 2: setHelperSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setPixDenom(*reinterpret_cast< int*>(_v)); break;
        case 4: setBrushOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setResolutionLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setHelper(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 9;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PixelateEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PixelateEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PixelateEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PixelateEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void PixelateEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PixelateEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_PixelatePreviewGenerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x05,
      40,   25,   25,   25, 0x05,
      58,   25,   25,   25, 0x05,
      78,   25,   25,   25, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   99,   25,   25, 0x0a,

 // methods: signature, parameters, type, tag, flags
     154,  143,   25,   25, 0x02,

 // properties: name, type, flags
     177,  173, 0x02095103,
     211,  186, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_PixelatePreviewGenerator[] = {
    "PixelatePreviewGenerator\0\0imageOpened()\0"
    "imageOpenFailed()\0generationStarted()\0"
    "generationFinished()\0pixelated_image\0"
    "pixelatedImageReady(QImage)\0image_file\0"
    "openImage(QString)\0int\0pixDenom\0"
    "bb::cascades::ImageView*\0preview\0"
};

void PixelatePreviewGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PixelatePreviewGenerator *_t = static_cast<PixelatePreviewGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageOpened(); break;
        case 1: _t->imageOpenFailed(); break;
        case 2: _t->generationStarted(); break;
        case 3: _t->generationFinished(); break;
        case 4: _t->pixelatedImageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->openImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PixelatePreviewGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PixelatePreviewGenerator::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_PixelatePreviewGenerator,
      qt_meta_data_PixelatePreviewGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PixelatePreviewGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PixelatePreviewGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PixelatePreviewGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PixelatePreviewGenerator))
        return static_cast<void*>(const_cast< PixelatePreviewGenerator*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PixelatePreviewGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = pixDenom(); break;
        case 1: *reinterpret_cast< bb::cascades::ImageView**>(_v) = preview(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPixDenom(*reinterpret_cast< int*>(_v)); break;
        case 1: setPreview(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PixelatePreviewGenerator::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void PixelatePreviewGenerator::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void PixelatePreviewGenerator::generationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void PixelatePreviewGenerator::generationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_PixelateImageGenerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   24,   23,   23, 0x05,
      56,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   23,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PixelateImageGenerator[] = {
    "PixelateImageGenerator\0\0output_image\0"
    "imageReady(QImage)\0finished()\0start()\0"
};

void PixelateImageGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PixelateImageGenerator *_t = static_cast<PixelateImageGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PixelateImageGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PixelateImageGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PixelateImageGenerator,
      qt_meta_data_PixelateImageGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PixelateImageGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PixelateImageGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PixelateImageGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PixelateImageGenerator))
        return static_cast<void*>(const_cast< PixelateImageGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int PixelateImageGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PixelateImageGenerator::imageReady(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PixelateImageGenerator::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
