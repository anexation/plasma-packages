/****************************************************************************
** Meta object code from reading C++ file 'blogger1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kblog/src/blogger1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blogger1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KBlog__Blogger1_t {
    QByteArrayData data[16];
    char stringdata[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBlog__Blogger1_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBlog__Blogger1_t qt_meta_stringdata_KBlog__Blogger1 = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KBlog::Blogger1"
QT_MOC_LITERAL(1, 16, 11), // "listedBlogs"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 29), // "QList<QMap<QString,QString> >"
QT_MOC_LITERAL(4, 59, 9), // "blogsList"
QT_MOC_LITERAL(5, 69, 15), // "fetchedUserInfo"
QT_MOC_LITERAL(6, 85, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(7, 107, 8), // "userInfo"
QT_MOC_LITERAL(8, 116, 17), // "slotFetchUserInfo"
QT_MOC_LITERAL(9, 134, 13), // "slotListBlogs"
QT_MOC_LITERAL(10, 148, 19), // "slotListRecentPosts"
QT_MOC_LITERAL(11, 168, 13), // "slotFetchPost"
QT_MOC_LITERAL(12, 182, 14), // "slotCreatePost"
QT_MOC_LITERAL(13, 197, 14), // "slotModifyPost"
QT_MOC_LITERAL(14, 212, 14), // "slotRemovePost"
QT_MOC_LITERAL(15, 227, 9) // "slotError"

    },
    "KBlog::Blogger1\0listedBlogs\0\0"
    "QList<QMap<QString,QString> >\0blogsList\0"
    "fetchedUserInfo\0QMap<QString,QString>\0"
    "userInfo\0slotFetchUserInfo\0slotListBlogs\0"
    "slotListRecentPosts\0slotFetchPost\0"
    "slotCreatePost\0slotModifyPost\0"
    "slotRemovePost\0slotError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBlog__Blogger1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   70,    2, 0x08 /* Private */,
       9,    2,   75,    2, 0x08 /* Private */,
      10,    2,   80,    2, 0x08 /* Private */,
      11,    2,   85,    2, 0x08 /* Private */,
      12,    2,   90,    2, 0x08 /* Private */,
      13,    2,   95,    2, 0x08 /* Private */,
      14,    2,  100,    2, 0x08 /* Private */,
      15,    3,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::QVariantList, QMetaType::QVariant,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QVariant,    2,    2,    2,

       0        // eod
};

void KBlog::Blogger1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Blogger1 *_t = static_cast<Blogger1 *>(_o);
        switch (_id) {
        case 0: _t->listedBlogs((*reinterpret_cast< const QList<QMap<QString,QString> >(*)>(_a[1]))); break;
        case 1: _t->fetchedUserInfo((*reinterpret_cast< const QMap<QString,QString>(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotFetchUserInfo((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->d_func()->slotListBlogs((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->d_func()->slotListRecentPosts((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->d_func()->slotFetchPost((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 6: _t->d_func()->slotCreatePost((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 7: _t->d_func()->slotModifyPost((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 8: _t->d_func()->slotRemovePost((*reinterpret_cast< const QList<QVariant>(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 9: _t->d_func()->slotError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Blogger1::*_t)(const QList<QMap<QString,QString> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blogger1::listedBlogs)) {
                *result = 0;
            }
        }
        {
            typedef void (Blogger1::*_t)(const QMap<QString,QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blogger1::fetchedUserInfo)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject KBlog::Blogger1::staticMetaObject = {
    { &Blog::staticMetaObject, qt_meta_stringdata_KBlog__Blogger1.data,
      qt_meta_data_KBlog__Blogger1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KBlog::Blogger1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBlog::Blogger1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KBlog__Blogger1.stringdata))
        return static_cast<void*>(const_cast< Blogger1*>(this));
    return Blog::qt_metacast(_clname);
}

int KBlog::Blogger1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Blog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void KBlog::Blogger1::listedBlogs(const QList<QMap<QString,QString> > & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBlog::Blogger1::fetchedUserInfo(const QMap<QString,QString> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
