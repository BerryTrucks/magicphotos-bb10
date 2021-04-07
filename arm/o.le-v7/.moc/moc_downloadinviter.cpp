/****************************************************************************
** Meta object code from reading C++ file 'downloadinviter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/downloadinviter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloadinviter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DownloadInviter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      34,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      63,   57,   16,   16, 0x0a,

 // methods: signature, parameters, type, tag, flags
     139,   16,   16,   16, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_DownloadInviter[] = {
    "DownloadInviter\0\0invitationSent()\0"
    "invitationSendFailed()\0state\0"
    "contextRegistrationStateUpdated(bb::platform::bbm::RegistrationState::"
    "Type)\0"
    "sendDownloadInvitation()\0"
};

void DownloadInviter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DownloadInviter *_t = static_cast<DownloadInviter *>(_o);
        switch (_id) {
        case 0: _t->invitationSent(); break;
        case 1: _t->invitationSendFailed(); break;
        case 2: _t->contextRegistrationStateUpdated((*reinterpret_cast< bb::platform::bbm::RegistrationState::Type(*)>(_a[1]))); break;
        case 3: _t->sendDownloadInvitation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DownloadInviter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DownloadInviter::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_DownloadInviter,
      qt_meta_data_DownloadInviter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DownloadInviter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DownloadInviter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DownloadInviter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DownloadInviter))
        return static_cast<void*>(const_cast< DownloadInviter*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DownloadInviter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DownloadInviter::invitationSent()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void DownloadInviter::invitationSendFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
