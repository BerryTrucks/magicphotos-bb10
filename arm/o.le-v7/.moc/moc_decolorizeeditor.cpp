/****************************************************************************
** Meta object code from reading C++ file 'decolorizeeditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/decolorizeeditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'decolorizeeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DecolorizeEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       8,   84, // properties
       1,  108, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      32,   17,   17,   17, 0x05,
      50,   17,   17,   17, 0x05,
      63,   17,   17,   17, 0x05,
      91,   81,   17,   17, 0x05,
     157,  121,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
     202,  187,   17,   17, 0x0a,

 // methods: signature, parameters, type, tag, flags
     240,  229,   17,   17, 0x02,
     259,  229,   17,   17, 0x02,
     306,  278,   17,   17, 0x02,
     334,   17,   17,   17, 0x02,
     354,  341,   17,   17, 0x02,
     404,  400,   17,   17, 0x02,
     441,   17,  425,   17, 0x02,

 // properties: name, type, flags
     460,  456, 0x02095103,
     465,  456, 0x02095103,
     475,  456, 0x02095103,
     492,  486, ((uint)QMetaType::QReal << 24) | 0x00095103,
     505,  486, ((uint)QMetaType::QReal << 24) | 0x00095103,
     511,  486, ((uint)QMetaType::QReal << 24) | 0x00095103,
     552,  527, 0x0009510b,
     564,  559, 0x01095001,

 // enums: name, flags, count, data
     572, 0x0,    3,  112,

 // enum data: key, value
     577, uint(DecolorizeEditor::ModeScroll),
     588, uint(DecolorizeEditor::ModeOriginal),
     601, uint(DecolorizeEditor::ModeEffected),

       0        // eod
};

static const char qt_meta_stringdata_DecolorizeEditor[] = {
    "DecolorizeEditor\0\0imageOpened()\0"
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
    "helperSize\0qreal\0brushOpacity\0scale\0"
    "resolutionLimit\0bb::cascades::ImageView*\0"
    "helper\0bool\0changed\0Mode\0ModeScroll\0"
    "ModeOriginal\0ModeEffected\0"
};

void DecolorizeEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DecolorizeEditor *_t = static_cast<DecolorizeEditor *>(_o);
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

const QMetaObjectExtraData DecolorizeEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DecolorizeEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_DecolorizeEditor,
      qt_meta_data_DecolorizeEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DecolorizeEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DecolorizeEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DecolorizeEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DecolorizeEditor))
        return static_cast<void*>(const_cast< DecolorizeEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DecolorizeEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 3: *reinterpret_cast< qreal*>(_v) = brushOpacity(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = resolutionLimit(); break;
        case 6: *reinterpret_cast< bb::cascades::ImageView**>(_v) = helper(); break;
        case 7: *reinterpret_cast< bool*>(_v) = changed(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< int*>(_v)); break;
        case 1: setBrushSize(*reinterpret_cast< int*>(_v)); break;
        case 2: setHelperSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setBrushOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setResolutionLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setHelper(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DecolorizeEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DecolorizeEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void DecolorizeEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DecolorizeEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void DecolorizeEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DecolorizeEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_GrayscaleImageGenerator[] = {

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
      38,   25,   24,   24, 0x05,
      57,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GrayscaleImageGenerator[] = {
    "GrayscaleImageGenerator\0\0output_image\0"
    "imageReady(QImage)\0finished()\0start()\0"
};

void GrayscaleImageGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GrayscaleImageGenerator *_t = static_cast<GrayscaleImageGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GrayscaleImageGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GrayscaleImageGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GrayscaleImageGenerator,
      qt_meta_data_GrayscaleImageGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GrayscaleImageGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GrayscaleImageGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GrayscaleImageGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrayscaleImageGenerator))
        return static_cast<void*>(const_cast< GrayscaleImageGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int GrayscaleImageGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GrayscaleImageGenerator::imageReady(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GrayscaleImageGenerator::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
