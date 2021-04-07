/****************************************************************************
** Meta object code from reading C++ file 'retoucheditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/retoucheditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'retoucheditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RetouchEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      16,   84, // properties
       1,  132, // enums/sets
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

 // methods: signature, parameters, type, tag, flags
     195,  184,   14,   14, 0x02,
     214,  184,   14,   14, 0x02,
     261,  233,   14,   14, 0x02,
     307,  289,   14,   14, 0x02,
     331,   14,   14,   14, 0x02,
     351,  338,   14,   14, 0x02,
     401,  397,   14,   14, 0x02,
     438,   14,  422,   14, 0x02,

 // properties: name, type, flags
     457,  453, 0x02095103,
     462,  453, 0x02095103,
     472,  453, 0x02095103,
     488,  483, 0x01095103,
     507,  483, 0x01095103,
     526,  453, 0x02095103,
     541,  453, 0x02095103,
     556,  453, 0x02095103,
     571,  453, 0x02095103,
     592,  586, ((uint)QMetaType::QReal << 24) | 0x00095103,
     605,  586, ((uint)QMetaType::QReal << 24) | 0x00095103,
     611,  586, ((uint)QMetaType::QReal << 24) | 0x00095103,
     652,  627, 0x0009510b,
     659,  483, 0x01095001,
     667,  453, 0x02095001,
     678,  453, 0x02095001,

 // enums: name, flags, count, data
     690, 0x0,    4,  136,

 // enum data: key, value
     695, uint(RetouchEditor::ModeScroll),
     706, uint(RetouchEditor::ModeSamplingPoint),
     724, uint(RetouchEditor::ModeClone),
     734, uint(RetouchEditor::ModeBlur),

       0        // eod
};

static const char qt_meta_stringdata_RetouchEditor[] = {
    "RetouchEditor\0\0imageOpened()\0"
    "imageOpenFailed()\0imageSaved()\0"
    "imageSaveFailed()\0available\0"
    "undoAvailabilityChanged(bool)\0"
    "fragmentSize,imageWidth,imageHeight\0"
    "prepareFragments(int,int,int)\0image_file\0"
    "openImage(QString)\0saveImage(QString)\0"
    "save_undo,center_x,center_y\0"
    "changeImageAt(bool,int,int)\0"
    "center_x,center_y\0updateHelperAt(int,int)\0"
    "undo()\0x,y,fragment\0"
    "addFragment(int,int,bb::cascades::ImageView*)\0"
    "x,y\0delFragment(int,int)\0QList<QObject*>\0"
    "getFragments()\0int\0mode\0brushSize\0"
    "helperSize\0bool\0samplingPointValid\0"
    "lastBlurPointValid\0samplingPointX\0"
    "samplingPointY\0lastBlurPointX\0"
    "lastBlurPointY\0qreal\0brushOpacity\0"
    "scale\0resolutionLimit\0bb::cascades::ImageView*\0"
    "helper\0changed\0imageWidth\0imageHeight\0"
    "Mode\0ModeScroll\0ModeSamplingPoint\0"
    "ModeClone\0ModeBlur\0"
};

void RetouchEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RetouchEditor *_t = static_cast<RetouchEditor *>(_o);
        switch (_id) {
        case 0: _t->imageOpened(); break;
        case 1: _t->imageOpenFailed(); break;
        case 2: _t->imageSaved(); break;
        case 3: _t->imageSaveFailed(); break;
        case 4: _t->undoAvailabilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->prepareFragments((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->openImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->saveImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->changeImageAt((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->updateHelperAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->undo(); break;
        case 11: _t->addFragment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bb::cascades::ImageView*(*)>(_a[3]))); break;
        case 12: _t->delFragment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: { QList<QObject*> _r = _t->getFragments();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RetouchEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RetouchEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_RetouchEditor,
      qt_meta_data_RetouchEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RetouchEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RetouchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RetouchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RetouchEditor))
        return static_cast<void*>(const_cast< RetouchEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RetouchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 3: *reinterpret_cast< bool*>(_v) = samplingPointValid(); break;
        case 4: *reinterpret_cast< bool*>(_v) = lastBlurPointValid(); break;
        case 5: *reinterpret_cast< int*>(_v) = samplingPointX(); break;
        case 6: *reinterpret_cast< int*>(_v) = samplingPointY(); break;
        case 7: *reinterpret_cast< int*>(_v) = lastBlurPointX(); break;
        case 8: *reinterpret_cast< int*>(_v) = lastBlurPointY(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = brushOpacity(); break;
        case 10: *reinterpret_cast< qreal*>(_v) = scale(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = resolutionLimit(); break;
        case 12: *reinterpret_cast< bb::cascades::ImageView**>(_v) = helper(); break;
        case 13: *reinterpret_cast< bool*>(_v) = changed(); break;
        case 14: *reinterpret_cast< int*>(_v) = imageWidth(); break;
        case 15: *reinterpret_cast< int*>(_v) = imageHeight(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMode(*reinterpret_cast< int*>(_v)); break;
        case 1: setBrushSize(*reinterpret_cast< int*>(_v)); break;
        case 2: setHelperSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setSamplingPointValid(*reinterpret_cast< bool*>(_v)); break;
        case 4: setLastBlurPointValid(*reinterpret_cast< bool*>(_v)); break;
        case 5: setSamplingPointX(*reinterpret_cast< int*>(_v)); break;
        case 6: setSamplingPointY(*reinterpret_cast< int*>(_v)); break;
        case 7: setLastBlurPointX(*reinterpret_cast< int*>(_v)); break;
        case 8: setLastBlurPointY(*reinterpret_cast< int*>(_v)); break;
        case 9: setBrushOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 10: setScale(*reinterpret_cast< qreal*>(_v)); break;
        case 11: setResolutionLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 12: setHelper(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RetouchEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RetouchEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RetouchEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void RetouchEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void RetouchEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RetouchEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
