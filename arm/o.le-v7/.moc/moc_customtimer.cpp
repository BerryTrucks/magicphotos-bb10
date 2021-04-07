/****************************************************************************
** Meta object code from reading C++ file 'customtimer.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/customtimer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customtimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CustomTimer[] = {

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
      13,   12,   12,   12, 0x05,
      23,   12,   12,   12, 0x05,
      39,   12,   12,   12, 0x05,
      59,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      77,   12,   12,   12, 0x0a,
      85,   12,   12,   12, 0x0a,

 // properties: name, type, flags
      97,   92, 0x01495001,
     104,   92, 0x01495103,
     119,  115, 0x02495103,

 // properties: notify_signal_id
       1,
       2,
       3,

       0        // eod
};

static const char qt_meta_stringdata_CustomTimer[] = {
    "CustomTimer\0\0timeout()\0activeChanged()\0"
    "singleShotChanged()\0intervalChanged()\0"
    "start()\0stop()\0bool\0active\0singleShot\0"
    "int\0interval\0"
};

void CustomTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CustomTimer *_t = static_cast<CustomTimer *>(_o);
        switch (_id) {
        case 0: _t->timeout(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->singleShotChanged(); break;
        case 3: _t->intervalChanged(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CustomTimer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CustomTimer::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_CustomTimer,
      qt_meta_data_CustomTimer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomTimer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomTimer))
        return static_cast<void*>(const_cast< CustomTimer*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int CustomTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 0: *reinterpret_cast< bool*>(_v) = active(); break;
        case 1: *reinterpret_cast< bool*>(_v) = singleShot(); break;
        case 2: *reinterpret_cast< int*>(_v) = interval(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setSingleShot(*reinterpret_cast< bool*>(_v)); break;
        case 2: setInterval(*reinterpret_cast< int*>(_v)); break;
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
void CustomTimer::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CustomTimer::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CustomTimer::singleShotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CustomTimer::intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
