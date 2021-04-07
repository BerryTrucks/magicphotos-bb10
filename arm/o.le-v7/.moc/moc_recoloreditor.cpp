/****************************************************************************
** Meta object code from reading C++ file 'recoloreditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/recoloreditor.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recoloreditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecolorEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       9,   79, // properties
       1,  106, // enums/sets
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
     289,   14,   14,   14, 0x02,
     309,  296,   14,   14, 0x02,
     359,  355,   14,   14, 0x02,
     396,   14,  380,   14, 0x02,

 // properties: name, type, flags
     415,  411, 0x02095103,
     420,  411, 0x02095103,
     430,  411, 0x02095103,
     441,  411, 0x02095103,
     451,  445, ((uint)QMetaType::QReal << 24) | 0x00095103,
     464,  445, ((uint)QMetaType::QReal << 24) | 0x00095103,
     470,  445, ((uint)QMetaType::QReal << 24) | 0x00095103,
     511,  486, 0x0009510b,
     523,  518, 0x01095001,

 // enums: name, flags, count, data
     531, 0x0,    4,  110,

 // enum data: key, value
     536, uint(RecolorEditor::ModeScroll),
     547, uint(RecolorEditor::ModeOriginal),
     560, uint(RecolorEditor::ModeEffected),
     573, uint(RecolorEditor::ModeHueSelection),

       0        // eod
};

static const char qt_meta_stringdata_RecolorEditor[] = {
    "RecolorEditor\0\0imageOpened()\0"
    "imageOpenFailed()\0imageSaved()\0"
    "imageSaveFailed()\0available\0"
    "undoAvailabilityChanged(bool)\0"
    "fragmentSize,imageWidth,imageHeight\0"
    "prepareFragments(int,int,int)\0image_file\0"
    "openImage(QString)\0saveImage(QString)\0"
    "save_undo,center_x,center_y\0"
    "changeImageAt(bool,int,int)\0undo()\0"
    "x,y,fragment\0addFragment(int,int,bb::cascades::ImageView*)\0"
    "x,y\0delFragment(int,int)\0QList<QObject*>\0"
    "getFragments()\0int\0mode\0brushSize\0"
    "helperSize\0hue\0qreal\0brushOpacity\0"
    "scale\0resolutionLimit\0bb::cascades::ImageView*\0"
    "helper\0bool\0changed\0Mode\0ModeScroll\0"
    "ModeOriginal\0ModeEffected\0ModeHueSelection\0"
};

void RecolorEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RecolorEditor *_t = static_cast<RecolorEditor *>(_o);
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
        case 9: _t->undo(); break;
        case 10: _t->addFragment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bb::cascades::ImageView*(*)>(_a[3]))); break;
        case 11: _t->delFragment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: { QList<QObject*> _r = _t->getFragments();
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RecolorEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RecolorEditor::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_RecolorEditor,
      qt_meta_data_RecolorEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecolorEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecolorEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecolorEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecolorEditor))
        return static_cast<void*>(const_cast< RecolorEditor*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int RecolorEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = mode(); break;
        case 1: *reinterpret_cast< int*>(_v) = brushSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = helperSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = hue(); break;
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
        case 3: setHue(*reinterpret_cast< int*>(_v)); break;
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
void RecolorEditor::imageOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void RecolorEditor::imageOpenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RecolorEditor::imageSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void RecolorEditor::imageSaveFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void RecolorEditor::undoAvailabilityChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RecolorEditor::prepareFragments(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
