/****************************************************************************
** Meta object code from reading C++ file 'gdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kblog/src/gdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KBlog__GData_t {
    QByteArrayData data[34];
    char stringdata[539];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBlog__GData_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBlog__GData_t qt_meta_stringdata_KBlog__GData = {
    {
QT_MOC_LITERAL(0, 0, 12), // "KBlog::GData"
QT_MOC_LITERAL(1, 13, 11), // "listedBlogs"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 29), // "QList<QMap<QString,QString> >"
QT_MOC_LITERAL(4, 56, 9), // "blogsList"
QT_MOC_LITERAL(5, 66, 17), // "listedAllComments"
QT_MOC_LITERAL(6, 84, 25), // "QList<KBlog::BlogComment>"
QT_MOC_LITERAL(7, 110, 12), // "commentsList"
QT_MOC_LITERAL(8, 123, 14), // "listedComments"
QT_MOC_LITERAL(9, 138, 16), // "KBlog::BlogPost*"
QT_MOC_LITERAL(10, 155, 4), // "post"
QT_MOC_LITERAL(11, 160, 8), // "comments"
QT_MOC_LITERAL(12, 169, 14), // "createdComment"
QT_MOC_LITERAL(13, 184, 22), // "const KBlog::BlogPost*"
QT_MOC_LITERAL(14, 207, 25), // "const KBlog::BlogComment*"
QT_MOC_LITERAL(15, 233, 7), // "comment"
QT_MOC_LITERAL(16, 241, 14), // "removedComment"
QT_MOC_LITERAL(17, 256, 16), // "fetchedProfileId"
QT_MOC_LITERAL(18, 273, 9), // "profileId"
QT_MOC_LITERAL(19, 283, 18), // "slotFetchProfileId"
QT_MOC_LITERAL(20, 302, 5), // "KJob*"
QT_MOC_LITERAL(21, 308, 13), // "slotListBlogs"
QT_MOC_LITERAL(22, 322, 20), // "Syndication::Loader*"
QT_MOC_LITERAL(23, 343, 20), // "Syndication::FeedPtr"
QT_MOC_LITERAL(24, 364, 22), // "Syndication::ErrorCode"
QT_MOC_LITERAL(25, 387, 16), // "slotListComments"
QT_MOC_LITERAL(26, 404, 19), // "slotListAllComments"
QT_MOC_LITERAL(27, 424, 19), // "slotListRecentPosts"
QT_MOC_LITERAL(28, 444, 13), // "slotFetchPost"
QT_MOC_LITERAL(29, 458, 14), // "slotCreatePost"
QT_MOC_LITERAL(30, 473, 14), // "slotModifyPost"
QT_MOC_LITERAL(31, 488, 14), // "slotRemovePost"
QT_MOC_LITERAL(32, 503, 17), // "slotCreateComment"
QT_MOC_LITERAL(33, 521, 17) // "slotRemoveComment"

    },
    "KBlog::GData\0listedBlogs\0\0"
    "QList<QMap<QString,QString> >\0blogsList\0"
    "listedAllComments\0QList<KBlog::BlogComment>\0"
    "commentsList\0listedComments\0"
    "KBlog::BlogPost*\0post\0comments\0"
    "createdComment\0const KBlog::BlogPost*\0"
    "const KBlog::BlogComment*\0comment\0"
    "removedComment\0fetchedProfileId\0"
    "profileId\0slotFetchProfileId\0KJob*\0"
    "slotListBlogs\0Syndication::Loader*\0"
    "Syndication::FeedPtr\0Syndication::ErrorCode\0"
    "slotListComments\0slotListAllComments\0"
    "slotListRecentPosts\0slotFetchPost\0"
    "slotCreatePost\0slotModifyPost\0"
    "slotRemovePost\0slotCreateComment\0"
    "slotRemoveComment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBlog__GData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,
       8,    2,  105,    2, 0x06 /* Public */,
      12,    2,  110,    2, 0x06 /* Public */,
      16,    2,  115,    2, 0x06 /* Public */,
      17,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  123,    2, 0x08 /* Private */,
      21,    3,  126,    2, 0x08 /* Private */,
      25,    3,  133,    2, 0x08 /* Private */,
      26,    3,  140,    2, 0x08 /* Private */,
      27,    3,  147,    2, 0x08 /* Private */,
      28,    3,  154,    2, 0x08 /* Private */,
      29,    1,  161,    2, 0x08 /* Private */,
      30,    1,  164,    2, 0x08 /* Private */,
      31,    1,  167,    2, 0x08 /* Private */,
      32,    1,  170,    2, 0x08 /* Private */,
      33,    1,  173,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 6,   10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 14,   10,   15,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 14,   10,   15,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 23, 0x80000000 | 24,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 23, 0x80000000 | 24,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 23, 0x80000000 | 24,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 23, 0x80000000 | 24,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 23, 0x80000000 | 24,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void, 0x80000000 | 20,    2,

       0        // eod
};

void KBlog::GData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GData *_t = static_cast<GData *>(_o);
        switch (_id) {
        case 0: _t->listedBlogs((*reinterpret_cast< const QList<QMap<QString,QString> >(*)>(_a[1]))); break;
        case 1: _t->listedAllComments((*reinterpret_cast< const QList<KBlog::BlogComment>(*)>(_a[1]))); break;
        case 2: _t->listedComments((*reinterpret_cast< KBlog::BlogPost*(*)>(_a[1])),(*reinterpret_cast< const QList<KBlog::BlogComment>(*)>(_a[2]))); break;
        case 3: _t->createdComment((*reinterpret_cast< const KBlog::BlogPost*(*)>(_a[1])),(*reinterpret_cast< const KBlog::BlogComment*(*)>(_a[2]))); break;
        case 4: _t->removedComment((*reinterpret_cast< const KBlog::BlogPost*(*)>(_a[1])),(*reinterpret_cast< const KBlog::BlogComment*(*)>(_a[2]))); break;
        case 5: _t->fetchedProfileId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->d_func()->slotFetchProfileId((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 7: _t->d_func()->slotListBlogs((*reinterpret_cast< Syndication::Loader*(*)>(_a[1])),(*reinterpret_cast< Syndication::FeedPtr(*)>(_a[2])),(*reinterpret_cast< Syndication::ErrorCode(*)>(_a[3]))); break;
        case 8: _t->d_func()->slotListComments((*reinterpret_cast< Syndication::Loader*(*)>(_a[1])),(*reinterpret_cast< Syndication::FeedPtr(*)>(_a[2])),(*reinterpret_cast< Syndication::ErrorCode(*)>(_a[3]))); break;
        case 9: _t->d_func()->slotListAllComments((*reinterpret_cast< Syndication::Loader*(*)>(_a[1])),(*reinterpret_cast< Syndication::FeedPtr(*)>(_a[2])),(*reinterpret_cast< Syndication::ErrorCode(*)>(_a[3]))); break;
        case 10: _t->d_func()->slotListRecentPosts((*reinterpret_cast< Syndication::Loader*(*)>(_a[1])),(*reinterpret_cast< Syndication::FeedPtr(*)>(_a[2])),(*reinterpret_cast< Syndication::ErrorCode(*)>(_a[3]))); break;
        case 11: _t->d_func()->slotFetchPost((*reinterpret_cast< Syndication::Loader*(*)>(_a[1])),(*reinterpret_cast< Syndication::FeedPtr(*)>(_a[2])),(*reinterpret_cast< Syndication::ErrorCode(*)>(_a[3]))); break;
        case 12: _t->d_func()->slotCreatePost((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 13: _t->d_func()->slotModifyPost((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 14: _t->d_func()->slotRemovePost((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 15: _t->d_func()->slotCreateComment((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        case 16: _t->d_func()->slotRemoveComment((*reinterpret_cast< KJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GData::*_t)(const QList<QMap<QString,QString> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GData::listedBlogs)) {
                *result = 0;
            }
        }
        {
            typedef void (GData::*_t)(const QList<KBlog::BlogComment> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GData::listedAllComments)) {
                *result = 1;
            }
        }
        {
            typedef void (GData::*_t)(KBlog::BlogPost * , const QList<KBlog::BlogComment> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GData::listedComments)) {
                *result = 2;
            }
        }
        {
            typedef void (GData::*_t)(const KBlog::BlogPost * , const KBlog::BlogComment * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GData::createdComment)) {
                *result = 3;
            }
        }
        {
            typedef void (GData::*_t)(const KBlog::BlogPost * , const KBlog::BlogComment * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GData::removedComment)) {
                *result = 4;
            }
        }
        {
            typedef void (GData::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GData::fetchedProfileId)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject KBlog::GData::staticMetaObject = {
    { &Blog::staticMetaObject, qt_meta_stringdata_KBlog__GData.data,
      qt_meta_data_KBlog__GData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KBlog::GData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBlog::GData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KBlog__GData.stringdata))
        return static_cast<void*>(const_cast< GData*>(this));
    return Blog::qt_metacast(_clname);
}

int KBlog::GData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Blog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void KBlog::GData::listedBlogs(const QList<QMap<QString,QString> > & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBlog::GData::listedAllComments(const QList<KBlog::BlogComment> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KBlog::GData::listedComments(KBlog::BlogPost * _t1, const QList<KBlog::BlogComment> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KBlog::GData::createdComment(const KBlog::BlogPost * _t1, const KBlog::BlogComment * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KBlog::GData::removedComment(const KBlog::BlogPost * _t1, const KBlog::BlogComment * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KBlog::GData::fetchedProfileId(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
