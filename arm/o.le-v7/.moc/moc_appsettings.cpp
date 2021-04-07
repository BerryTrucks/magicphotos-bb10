/****************************************************************************
** Meta object code from reading C++ file 'appsettings.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/appsettings.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AppSettings[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      16,   12, 0x02095103,
      29,   12, 0x02095103,
      61,   12, 0x02095103,
      78,   12, 0x02095103,
      93,   88, 0x01095103,
     109,   88, 0x01095103,
     140,  134, ((uint)QMetaType::QReal << 24) | 0x00095103,
     153,  134, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_AppSettings[] = {
    "AppSettings\0int\0launchNumber\0"
    "lastFeedbackRequestLaunchNumber\0"
    "defaultBrushSize\0brushSize\0bool\0"
    "requestFeedback\0showModeChangeSuggestion\0"
    "qreal\0brushOpacity\0imageResolutionLimit\0"
};

void AppSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AppSettings::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AppSettings::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AppSettings,
      qt_meta_data_AppSettings, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AppSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AppSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AppSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AppSettings))
        return static_cast<void*>(const_cast< AppSettings*>(this));
    return QObject::qt_metacast(_clname);
}

int AppSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = launchNumber(); break;
        case 1: *reinterpret_cast< int*>(_v) = lastFeedbackRequestLaunchNumber(); break;
        case 2: *reinterpret_cast< int*>(_v) = defaultBrushSize(); break;
        case 3: *reinterpret_cast< int*>(_v) = brushSize(); break;
        case 4: *reinterpret_cast< bool*>(_v) = requestFeedback(); break;
        case 5: *reinterpret_cast< bool*>(_v) = showModeChangeSuggestion(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = brushOpacity(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = imageResolutionLimit(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLaunchNumber(*reinterpret_cast< int*>(_v)); break;
        case 1: setLastFeedbackRequestLaunchNumber(*reinterpret_cast< int*>(_v)); break;
        case 2: setDefaultBrushSize(*reinterpret_cast< int*>(_v)); break;
        case 3: setBrushSize(*reinterpret_cast< int*>(_v)); break;
        case 4: setRequestFeedback(*reinterpret_cast< bool*>(_v)); break;
        case 5: setShowModeChangeSuggestion(*reinterpret_cast< bool*>(_v)); break;
        case 6: setBrushOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setImageResolutionLimit(*reinterpret_cast< qreal*>(_v)); break;
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
QT_END_MOC_NAMESPACE
