/****************************************************************************
** Meta object code from reading C++ file 'cartooneditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/cartooneditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cartooneditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CartoonEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      10,   84, // properties
       1,  114, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      29,   14,   14,   14, 0x05,
      47,   14,   14,   14, 0x05,
      60,   14,   14,   14, 0x05,
      88,   78,   14,   14, 0x05,
     154,  118,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     199,  184,   14,   14, 0x0a,

 // methods: signature, parameters, type, tag, flags
     237,  226,   14,   14, 0x02,
     256,  226,   14,   14, 0x02,
     303,  275,   14,   14, 0x02,
     331,   14,   14,   14, 0x02,
     351,  338,   14,   14, 0x02,
     401,  397,   14,   14, 0x02,
     438,   14,  422,   14, 0x02,

 // properties: name, type, flags
     457,  453, 0x02095103,
     462,  453, 0x02095103,
     472,  453, 0x02095103,
     483,  453, 0x02095103,
     490,  453, 0x02095103,
     506,  500, ((uint)QMetaType::QReal << 24) | 0x00095103,
     519,  500, ((uint)QMetaType::QReal << 24) | 0x00095103,
     525,  500, ((uint)QMetaType::QReal << 24) | 0x00095103,
     566,  541, 0x0009510b,
     578,  573, 0x01095001,

 // enums: name, flags, count, data
     586, 0x0,    3,  118,

 // enum data: key, value
     591, uint(CartoonEditor::ModeScroll),
     602, uint(CartoonEditor::ModeOriginal),
     615, uint(CartoonEditor::ModeEffected),

       0        // eod
};

static const char qt_meta_stringdata_CartoonEditor[] = {
    "CartoonEditor\0\0imageOpened()\0"
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
    "helperSize\0radius\0threshold\0qreal\0"
    "brushOpacity\0scale\0resolutionLimit\0"
    "bb::cascades::ImageView*\0helper\0bool\0"
    "changed\0Mode\0ModeScroll\0ModeOriginal\0"
    "ModeEffected\0"
};

void CartoonEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CartoonEditor *_t = static_cast<CartoonEditor *>(_o);
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

const QMetaObjectExtraData CartoonEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CartoonEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_CartoonEditor,
      qt_meta_data_CartoonEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CartoonEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CartoonEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CartoonEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CartoonEditor))
        return static_cast<void*>(const_cast< CartoonEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CartoonEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 4: *reinterpret_cast< int*>(_v) = threshold(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = brushOpacity(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = resolutionLimit(); break;
        case 8: *reinterpret_cast< bb::cascades::ImageView**>(_v) = helper(); break;
        case 9: *reinterpret_cast< bool*>(_v) = changed(); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< int*>(_v)); break;
        case 1: setBrushSize(*reinterpret_cast< int*>(_v)); break;
        case 2: setHelperSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setRadius(*reinterpret_cast< int*>(_v)); break;
        case 4: setThreshold(*reinterpret_cast< int*>(_v)); break;
        case 5: setBrushOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setResolutionLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setHelper(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CartoonEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CartoonEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CartoonEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CartoonEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CartoonEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CartoonEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_CartoonPreviewGenerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      39,   24,   24,   24, 0x05,
      57,   24,   24,   24, 0x05,
      77,   24,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   98,   24,   24, 0x0a,

 // methods: signature, parameters, type, tag, flags
     149,  138,   24,   24, 0x02,

 // properties: name, type, flags
     172,  168, 0x02095103,
     179,  168, 0x02095103,
     214,  189, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_CartoonPreviewGenerator[] = {
    "CartoonPreviewGenerator\0\0imageOpened()\0"
    "imageOpenFailed()\0generationStarted()\0"
    "generationFinished()\0cartoon_image\0"
    "cartoonImageReady(QImage)\0image_file\0"
    "openImage(QString)\0int\0radius\0threshold\0"
    "bb::cascades::ImageView*\0preview\0"
};

void CartoonPreviewGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CartoonPreviewGenerator *_t = static_cast<CartoonPreviewGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageOpened(); break;
        case 1: _t->imageOpenFailed(); break;
        case 2: _t->generationStarted(); break;
        case 3: _t->generationFinished(); break;
        case 4: _t->cartoonImageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->openImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CartoonPreviewGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CartoonPreviewGenerator::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_CartoonPreviewGenerator,
      qt_meta_data_CartoonPreviewGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CartoonPreviewGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CartoonPreviewGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CartoonPreviewGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CartoonPreviewGenerator))
        return static_cast<void*>(const_cast< CartoonPreviewGenerator*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CartoonPreviewGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 1: *reinterpret_cast< int*>(_v) = threshold(); break;
        case 2: *reinterpret_cast< bb::cascades::ImageView**>(_v) = preview(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setRadius(*reinterpret_cast< int*>(_v)); break;
        case 1: setThreshold(*reinterpret_cast< int*>(_v)); break;
        case 2: setPreview(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CartoonPreviewGenerator::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CartoonPreviewGenerator::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CartoonPreviewGenerator::generationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CartoonPreviewGenerator::generationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_CartoonImageGenerator[] = {

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
      36,   23,   22,   22, 0x05,
      55,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CartoonImageGenerator[] = {
    "CartoonImageGenerator\0\0output_image\0"
    "imageReady(QImage)\0finished()\0start()\0"
};

void CartoonImageGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CartoonImageGenerator *_t = static_cast<CartoonImageGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CartoonImageGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CartoonImageGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CartoonImageGenerator,
      qt_meta_data_CartoonImageGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CartoonImageGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CartoonImageGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CartoonImageGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CartoonImageGenerator))
        return static_cast<void*>(const_cast< CartoonImageGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int CartoonImageGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CartoonImageGenerator::imageReady(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CartoonImageGenerator::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
