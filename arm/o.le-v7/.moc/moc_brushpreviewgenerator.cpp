/****************************************************************************
** Meta object code from reading C++ file 'brushpreviewgenerator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/brushpreviewgenerator.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brushpreviewgenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BrushPreviewGenerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      26,   22, 0x02095103,
      31,   22, 0x02095103,
      45,   39, ((uint)QMetaType::QReal << 24) | 0x00095103,
      78,   53, 0x0009510b,

       0        // eod
};

static const char qt_meta_stringdata_BrushPreviewGenerator[] = {
    "BrushPreviewGenerator\0int\0size\0maxSize\0"
    "qreal\0opacity\0bb::cascades::ImageView*\0"
    "preview\0"
};

void BrushPreviewGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BrushPreviewGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BrushPreviewGenerator::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_BrushPreviewGenerator,
      qt_meta_data_BrushPreviewGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BrushPreviewGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BrushPreviewGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BrushPreviewGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BrushPreviewGenerator))
        return static_cast<void*>(const_cast< BrushPreviewGenerator*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BrushPreviewGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = size(); break;
        case 1: *reinterpret_cast< int*>(_v) = maxSize(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = opacity(); break;
        case 3: *reinterpret_cast< bb::cascades::ImageView**>(_v) = preview(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSize(*reinterpret_cast< int*>(_v)); break;
        case 1: setMaxSize(*reinterpret_cast< int*>(_v)); break;
        case 2: setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setPreview(*reinterpret_cast< bb::cascades::ImageView**>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
