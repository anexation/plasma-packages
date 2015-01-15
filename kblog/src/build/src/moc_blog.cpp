/****************************************************************************
** Meta object code from reading C++ file 'blog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kblog/src/blog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'blog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KBlog__Blog_t {
    QByteArrayData data[22];
    char stringdata[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KBlog__Blog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KBlog__Blog_t qt_meta_stringdata_KBlog__Blog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KBlog::Blog"
QT_MOC_LITERAL(1, 12, 17), // "listedRecentPosts"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "QList<KBlog::BlogPost>"
QT_MOC_LITERAL(4, 54, 5), // "posts"
QT_MOC_LITERAL(5, 60, 11), // "createdPost"
QT_MOC_LITERAL(6, 72, 16), // "KBlog::BlogPost*"
QT_MOC_LITERAL(7, 89, 4), // "post"
QT_MOC_LITERAL(8, 94, 11), // "fetchedPost"
QT_MOC_LITERAL(9, 106, 12), // "modifiedPost"
QT_MOC_LITERAL(10, 119, 11), // "removedPost"
QT_MOC_LITERAL(11, 131, 5), // "error"
QT_MOC_LITERAL(12, 137, 22), // "KBlog::Blog::ErrorType"
QT_MOC_LITERAL(13, 160, 4), // "type"
QT_MOC_LITERAL(14, 165, 12), // "errorMessage"
QT_MOC_LITERAL(15, 178, 9), // "errorPost"
QT_MOC_LITERAL(16, 188, 10), // "errorMedia"
QT_MOC_LITERAL(17, 199, 17), // "KBlog::BlogMedia*"
QT_MOC_LITERAL(18, 217, 5), // "media"
QT_MOC_LITERAL(19, 223, 12), // "errorComment"
QT_MOC_LITERAL(20, 236, 19), // "KBlog::BlogComment*"
QT_MOC_LITERAL(21, 256, 7) // "comment"

    },
    "KBlog::Blog\0listedRecentPosts\0\0"
    "QList<KBlog::BlogPost>\0posts\0createdPost\0"
    "KBlog::BlogPost*\0post\0fetchedPost\0"
    "modifiedPost\0removedPost\0error\0"
    "KBlog::Blog::ErrorType\0type\0errorMessage\0"
    "errorPost\0errorMedia\0KBlog::BlogMedia*\0"
    "media\0errorComment\0KBlog::BlogComment*\0"
    "comment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KBlog__Blog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    1,   65,    2, 0x06 /* Public */,
       9,    1,   68,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,
      11,    2,   74,    2, 0x06 /* Public */,
      15,    3,   79,    2, 0x06 /* Public */,
      16,    3,   86,    2, 0x06 /* Public */,
      19,    4,   93,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString,   13,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 6,   13,   14,    7,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 17,   13,   14,   18,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 20,   13,   14,    7,   21,

       0        // eod
};

void KBlog::Blog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Blog *_t = static_cast<Blog *>(_o);
        switch (_id) {
        case 0: _t->listedRecentPosts((*reinterpret_cast< const QList<KBlog::BlogPost>(*)>(_a[1]))); break;
        case 1: _t->createdPost((*reinterpret_cast< KBlog::BlogPost*(*)>(_a[1]))); break;
        case 2: _t->fetchedPost((*reinterpret_cast< KBlog::BlogPost*(*)>(_a[1]))); break;
        case 3: _t->modifiedPost((*reinterpret_cast< KBlog::BlogPost*(*)>(_a[1]))); break;
        case 4: _t->removedPost((*reinterpret_cast< KBlog::BlogPost*(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< KBlog::Blog::ErrorType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->errorPost((*reinterpret_cast< KBlog::Blog::ErrorType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< KBlog::BlogPost*(*)>(_a[3]))); break;
        case 7: _t->errorMedia((*reinterpret_cast< KBlog::Blog::ErrorType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< KBlog::BlogMedia*(*)>(_a[3]))); break;
        case 8: _t->errorComment((*reinterpret_cast< KBlog::Blog::ErrorType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< KBlog::BlogPost*(*)>(_a[3])),(*reinterpret_cast< KBlog::BlogComment*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Blog::*_t)(const QList<KBlog::BlogPost> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::listedRecentPosts)) {
                *result = 0;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::BlogPost * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::createdPost)) {
                *result = 1;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::BlogPost * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::fetchedPost)) {
                *result = 2;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::BlogPost * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::modifiedPost)) {
                *result = 3;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::BlogPost * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::removedPost)) {
                *result = 4;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::Blog::ErrorType , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::error)) {
                *result = 5;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::Blog::ErrorType , const QString & , KBlog::BlogPost * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::errorPost)) {
                *result = 6;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::Blog::ErrorType , const QString & , KBlog::BlogMedia * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::errorMedia)) {
                *result = 7;
            }
        }
        {
            typedef void (Blog::*_t)(KBlog::Blog::ErrorType , const QString & , KBlog::BlogPost * , KBlog::BlogComment * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Blog::errorComment)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject KBlog::Blog::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KBlog__Blog.data,
      qt_meta_data_KBlog__Blog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KBlog::Blog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KBlog::Blog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KBlog__Blog.stringdata))
        return static_cast<void*>(const_cast< Blog*>(this));
    return QObject::qt_metacast(_clname);
}

int KBlog::Blog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KBlog::Blog::listedRecentPosts(const QList<KBlog::BlogPost> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KBlog::Blog::createdPost(KBlog::BlogPost * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KBlog::Blog::fetchedPost(KBlog::BlogPost * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void KBlog::Blog::modifiedPost(KBlog::BlogPost * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void KBlog::Blog::removedPost(KBlog::BlogPost * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void KBlog::Blog::error(KBlog::Blog::ErrorType _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void KBlog::Blog::errorPost(KBlog::Blog::ErrorType _t1, const QString & _t2, KBlog::BlogPost * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void KBlog::Blog::errorMedia(KBlog::Blog::ErrorType _t1, const QString & _t2, KBlog::BlogMedia * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void KBlog::Blog::errorComment(KBlog::Blog::ErrorType _t1, const QString & _t2, KBlog::BlogPost * _t3, KBlog::BlogComment * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
