/****************************************************************************
** Meta object code from reading C++ file 'metaweblog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kblog/src/metaweblog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metaweblog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KBlog__MetaWeblog_t {
    QByteArrayData data[10];
    char stringdata[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBlog__MetaWeblog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBlog__MetaWeblog_t qt_meta_stringdata_KBlog__MetaWeblog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KBlog::MetaWeblog"
QT_MOC_LITERAL(1, 18, 12), // "createdMedia"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "KBlog::BlogMedia*"
QT_MOC_LITERAL(4, 50, 5), // "media"
QT_MOC_LITERAL(5, 56, 16), // "listedCategories"
QT_MOC_LITERAL(6, 73, 29), // "QList<QMap<QString,QString> >"
QT_MOC_LITERAL(7, 103, 10), // "categories"
QT_MOC_LITERAL(8, 114, 18), // "slotListCategories"
QT_MOC_LITERAL(9, 133, 15) // "slotCreateMedia"

    },
    "KBlog::MetaWeblog\0createdMedia\0\0"
    "KBlog::BlogMedia*\0media\0listedCategories\0"
    "QList<QMap<QString,QString> >\0categories\0"
    "slotListCategories\0slotCreateMedia"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBlog__MetaWeblog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   40,    2, 0x08 /* Private */,
       9,    2,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,

       0        // eod
};

void KBlog::MetaWeblog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MetaWeblog *_t = static_cast<MetaWeblog *>(_o);
        switch (_id) {
        case 0: _t->createdMedia((*reinterpret_cast< KBlog::BlogMedia*(*)>(_a[1]))); break;
        case 1: _t->listedCategories((*reinterpret_cast< const QList<QMap<QString,QString> >(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotListCategories((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->d_func()->slotCreateMedia((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MetaWeblog::*_t)(KBlog::BlogMedia * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MetaWeblog::createdMedia)) {
                *result = 0;
            }
        }
        {
            typedef void (MetaWeblog::*_t)(const QList<QMap<QString,QString> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MetaWeblog::listedCategories)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject KBlog::MetaWeblog::staticMetaObject = {
    { &Blogger1::staticMetaObject, qt_meta_stringdata_KBlog__MetaWeblog.data,
      qt_meta_data_KBlog__MetaWeblog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KBlog::MetaWeblog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBlog::MetaWeblog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KBlog__MetaWeblog.stringdata))
        return static_cast<void*>(const_cast< MetaWeblog*>(this));
    return Blogger1::qt_metacast(_clname);
}

int KBlog::MetaWeblog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Blogger1::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void KBlog::MetaWeblog::createdMedia(KBlog::BlogMedia * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBlog::MetaWeblog::listedCategories(const QList<QMap<QString,QString> > & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
