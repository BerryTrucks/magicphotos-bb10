/****************************************************************************
** Meta object code from reading C++ file 'blureditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/blureditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blureditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BlurEditor[] = {

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
      12,   11,   11,   11, 0x05,
      26,   11,   11,   11, 0x05,
      44,   11,   11,   11, 0x05,
      57,   11,   11,   11, 0x05,
      85,   75,   11,   11, 0x05,
     151,  115,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     196,  181,   11,   11, 0x0a,

 // methods: signature, parameters, type, tag, flags
     234,  223,   11,   11, 0x02,
     253,  223,   11,   11, 0x02,
     300,  272,   11,   11, 0x02,
     328,   11,   11,   11, 0x02,
     348,  335,   11,   11, 0x02,
     398,  394,   11,   11, 0x02,
     435,   11,  419,   11, 0x02,

 // properties: name, type, flags
     454,  450, 0x02095103,
     459,  450, 0x02095103,
     469,  450, 0x02095103,
     480,  450, 0x02095103,
     493,  487, ((uint)QMetaType::QReal << 24) | 0x00095103,
     506,  487, ((uint)QMetaType::QReal << 24) | 0x00095103,
     512,  487, ((uint)QMetaType::QReal << 24) | 0x00095103,
     553,  528, 0x0009510b,
     565,  560, 0x01095001,

 // enums: name, flags, count, data
     573, 0x0,    3,  115,

 // enum data: key, value
     578, uint(BlurEditor::ModeScroll),
     589, uint(BlurEditor::ModeOriginal),
     602, uint(BlurEditor::ModeEffected),

       0        // eod
};

static const char qt_meta_stringdata_BlurEditor[] = {
    "BlurEditor\0\0imageOpened()\0imageOpenFailed()\0"
    "imageSaved()\0imageSaveFailed()\0available\0"
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
    "helperSize\0radius\0qreal\0brushOpacity\0"
    "scale\0resolutionLimit\0bb::cascades::ImageView*\0"
    "helper\0bool\0changed\0Mode\0ModeScroll\0"
    "ModeOriginal\0ModeEffected\0"
};

void BlurEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlurEditor *_t = static_cast<BlurEditor *>(_o);
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

const QMetaObjectExtraData BlurEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlurEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_BlurEditor,
      qt_meta_data_BlurEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlurEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlurEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlurEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlurEditor))
        return static_cast<void*>(const_cast< BlurEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BlurEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 3: *reinterpret_cast< int*>(_v) = radius(); break;
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
        case 3: setRadius(*reinterpret_cast< int*>(_v)); break;
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
void BlurEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BlurEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void BlurEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void BlurEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void BlurEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BlurEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_BlurPreviewGenerator[] = {

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
      22,   21,   21,   21, 0x05,
      36,   21,   21,   21, 0x05,
      54,   21,   21,   21, 0x05,
      74,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
     106,   95,   21,   21, 0x0a,

 // methods: signature, parameters, type, tag, flags
     140,  129,   21,   21, 0x02,

 // properties: name, type, flags
     163,  159, 0x02095103,
     195,  170, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_BlurPreviewGenerator[] = {
    "BlurPreviewGenerator\0\0imageOpened()\0"
    "imageOpenFailed()\0generationStarted()\0"
    "generationFinished()\0blur_image\0"
    "blurImageReady(QImage)\0image_file\0"
    "openImage(QString)\0int\0radius\0"
    "bb::cascades::ImageView*\0preview\0"
};

void BlurPreviewGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlurPreviewGenerator *_t = static_cast<BlurPreviewGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageOpened(); break;
        case 1: _t->imageOpenFailed(); break;
        case 2: _t->generationStarted(); break;
        case 3: _t->generationFinished(); break;
        case 4: _t->blurImageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->openImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BlurPreviewGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlurPreviewGenerator::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_BlurPreviewGenerator,
      qt_meta_data_BlurPreviewGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlurPreviewGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlurPreviewGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlurPreviewGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlurPreviewGenerator))
        return static_cast<void*>(const_cast< BlurPreviewGenerator*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BlurPreviewGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< int*>(_v) = radius(); break;
        case 1: *reinterpret_cast< bb::cascades::ImageView**>(_v) = preview(); break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRadius(*reinterpret_cast< int*>(_v)); break;
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
void BlurPreviewGenerator::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void BlurPreviewGenerator::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void BlurPreviewGenerator::generationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void BlurPreviewGenerator::generationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_BlurImageGenerator[] = {

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
      33,   20,   19,   19, 0x05,
      52,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BlurImageGenerator[] = {
    "BlurImageGenerator\0\0output_image\0"
    "imageReady(QImage)\0finished()\0start()\0"
};

void BlurImageGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BlurImageGenerator *_t = static_cast<BlurImageGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BlurImageGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BlurImageGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BlurImageGenerator,
      qt_meta_data_BlurImageGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BlurImageGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BlurImageGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BlurImageGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BlurImageGenerator))
        return static_cast<void*>(const_cast< BlurImageGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int BlurImageGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BlurImageGenerator::imageReady(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BlurImageGenerator::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
