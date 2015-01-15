/****************************************************************************
** Meta object code from reading C++ file 'movabletype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kblog/src/movabletype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movabletype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KBlog__MovableType_t {
    QByteArrayData data[15];
    char stringdata[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBlog__MovableType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBlog__MovableType_t qt_meta_stringdata_KBlog__MovableType = {
    {
QT_MOC_LITERAL(0, 0, 18), // "KBlog::MovableType"
QT_MOC_LITERAL(1, 19, 20), // "listedTrackBackPings"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "KBlog::BlogPost*"
QT_MOC_LITERAL(4, 58, 4), // "post"
QT_MOC_LITERAL(5, 63, 29), // "QList<QMap<QString,QString> >"
QT_MOC_LITERAL(6, 93, 5), // "pings"
QT_MOC_LITERAL(7, 99, 22), // "slotListTrackBackPings"
QT_MOC_LITERAL(8, 122, 14), // "slotCreatePost"
QT_MOC_LITERAL(9, 137, 14), // "slotModifyPost"
QT_MOC_LITERAL(10, 152, 21), // "slotGetPostCategories"
QT_MOC_LITERAL(11, 174, 21), // "slotSetPostCategories"
QT_MOC_LITERAL(12, 196, 21), // "slotTriggerCreatePost"
QT_MOC_LITERAL(13, 218, 21), // "slotTriggerModifyPost"
QT_MOC_LITERAL(14, 240, 20) // "slotTriggerFetchPost"

    },
    "KBlog::MovableType\0listedTrackBackPings\0"
    "\0KBlog::BlogPost*\0post\0"
    "QList<QMap<QString,QString> >\0pings\0"
    "slotListTrackBackPings\0slotCreatePost\0"
    "slotModifyPost\0slotGetPostCategories\0"
    "slotSetPostCategories\0slotTriggerCreatePost\0"
    "slotTriggerModifyPost\0slotTriggerFetchPost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBlog__MovableType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   64,    2, 0x08 /* Private */,
       8,    2,   69,    2, 0x08 /* Private */,
       9,    2,   74,    2, 0x08 /* Private */,
      10,    2,   79,    2, 0x08 /* Private */,
      11,    2,   84,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KBlog::MovableType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MovableType *_t = static_cast<MovableType *>(_o);
        switch (_id) {
        case 0: _t->listedTrackBackPings((*reinterpret_cast< KBlog::BlogPost*(*)>(_a[1])),(*reinterpret_cast< const QList<QMap<QString,QString> >(*)>(_a[2]))); break;
        case 1: _t->d_func()->slotListTrackBackPings((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 2: _t->d_func()->slotCreatePost((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->d_func()->slotModifyPost((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->d_func()->slotGetPostCategories((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->d_func()->slotSetPostCategories((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->d_func()->slotTriggerCreatePost(); break;
        case 7: _t->d_func()->slotTriggerModifyPost(); break;
        case 8: _t->d_func()->slotTriggerFetchPost(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MovableType::*_t)(KBlog::BlogPost * , const QList<QMap<QString,QString> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MovableType::listedTrackBackPings)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject KBlog::MovableType::staticMetaObject = {
    { &MetaWeblog::staticMetaObject, qt_meta_stringdata_KBlog__MovableType.data,
      qt_meta_data_KBlog__MovableType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KBlog::MovableType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBlog::MovableType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KBlog__MovableType.stringdata))
        return static_cast<void*>(const_cast< MovableType*>(this));
    return MetaWeblog::qt_metacast(_clname);
}

int KBlog::MovableType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MetaWeblog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void KBlog::MovableType::listedTrackBackPings(KBlog::BlogPost * _t1, const QList<QMap<QString,QString> > & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
