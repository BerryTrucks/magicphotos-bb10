/****************************************************************************
** Meta object code from reading C++ file 'sketcheditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/sketcheditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sketcheditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SketchEditor[] = {

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
      14,   13,   13,   13, 0x05,
      28,   13,   13,   13, 0x05,
      46,   13,   13,   13, 0x05,
      59,   13,   13,   13, 0x05,
      87,   77,   13,   13, 0x05,
     153,  117,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     198,  183,   13,   13, 0x0a,

 // methods: signature, parameters, type, tag, flags
     236,  225,   13,   13, 0x02,
     255,  225,   13,   13, 0x02,
     302,  274,   13,   13, 0x02,
     330,   13,   13,   13, 0x02,
     350,  337,   13,   13, 0x02,
     400,  396,   13,   13, 0x02,
     437,   13,  421,   13, 0x02,

 // properties: name, type, flags
     456,  452, 0x02095103,
     461,  452, 0x02095103,
     471,  452, 0x02095103,
     482,  452, 0x02095103,
     495,  489, ((uint)QMetaType::QReal << 24) | 0x00095103,
     508,  489, ((uint)QMetaType::QReal << 24) | 0x00095103,
     514,  489, ((uint)QMetaType::QReal << 24) | 0x00095103,
     555,  530, 0x0009510b,
     567,  562, 0x01095001,

 // enums: name, flags, count, data
     575, 0x0,    3,  115,

 // enum data: key, value
     580, uint(SketchEditor::ModeScroll),
     591, uint(SketchEditor::ModeOriginal),
     604, uint(SketchEditor::ModeEffected),

       0        // eod
};

static const char qt_meta_stringdata_SketchEditor[] = {
    "SketchEditor\0\0imageOpened()\0"
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
    "helperSize\0radius\0qreal\0brushOpacity\0"
    "scale\0resolutionLimit\0bb::cascades::ImageView*\0"
    "helper\0bool\0changed\0Mode\0ModeScroll\0"
    "ModeOriginal\0ModeEffected\0"
};

void SketchEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SketchEditor *_t = static_cast<SketchEditor *>(_o);
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

const QMetaObjectExtraData SketchEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketchEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_SketchEditor,
      qt_meta_data_SketchEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketchEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketchEditor))
        return static_cast<void*>(const_cast< SketchEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SketchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SketchEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SketchEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SketchEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SketchEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void SketchEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SketchEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
static const uint qt_meta_data_SketchPreviewGenerator[] = {

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
      24,   23,   23,   23, 0x05,
      38,   23,   23,   23, 0x05,
      56,   23,   23,   23, 0x05,
      76,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
     110,   97,   23,   23, 0x0a,

 // methods: signature, parameters, type, tag, flags
     146,  135,   23,   23, 0x02,

 // properties: name, type, flags
     169,  165, 0x02095103,
     201,  176, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_SketchPreviewGenerator[] = {
    "SketchPreviewGenerator\0\0imageOpened()\0"
    "imageOpenFailed()\0generationStarted()\0"
    "generationFinished()\0sketch_image\0"
    "sketchImageReady(QImage)\0image_file\0"
    "openImage(QString)\0int\0radius\0"
    "bb::cascades::ImageView*\0preview\0"
};

void SketchPreviewGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SketchPreviewGenerator *_t = static_cast<SketchPreviewGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageOpened(); break;
        case 1: _t->imageOpenFailed(); break;
        case 2: _t->generationStarted(); break;
        case 3: _t->generationFinished(); break;
        case 4: _t->sketchImageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 5: _t->openImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SketchPreviewGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketchPreviewGenerator::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_SketchPreviewGenerator,
      qt_meta_data_SketchPreviewGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketchPreviewGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketchPreviewGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketchPreviewGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketchPreviewGenerator))
        return static_cast<void*>(const_cast< SketchPreviewGenerator*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int SketchPreviewGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SketchPreviewGenerator::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SketchPreviewGenerator::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SketchPreviewGenerator::generationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void SketchPreviewGenerator::generationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
static const uint qt_meta_data_SketchImageGenerator[] = {

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
      35,   22,   21,   21, 0x05,
      54,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SketchImageGenerator[] = {
    "SketchImageGenerator\0\0output_image\0"
    "imageReady(QImage)\0finished()\0start()\0"
};

void SketchImageGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SketchImageGenerator *_t = static_cast<SketchImageGenerator *>(_o);
        switch (_id) {
        case 0: _t->imageReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SketchImageGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SketchImageGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SketchImageGenerator,
      qt_meta_data_SketchImageGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SketchImageGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SketchImageGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SketchImageGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SketchImageGenerator))
        return static_cast<void*>(const_cast< SketchImageGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int SketchImageGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SketchImageGenerator::imageReady(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SketchImageGenerator::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
