/****************************************************************************
** Meta object code from reading C++ file 'QDownloadWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QDownloadWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDownloadWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDownloadWidget_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDownloadWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDownloadWidget_t qt_meta_stringdata_QDownloadWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QDownloadWidget"
QT_MOC_LITERAL(1, 16, 20), // "loadLevelImageSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "strImage"
QT_MOC_LITERAL(4, 47, 14), // "loadPageSignal"
QT_MOC_LITERAL(5, 62, 10), // "PageNumber"
QT_MOC_LITERAL(6, 73, 16), // "downloadResource"
QT_MOC_LITERAL(7, 90, 6), // "strUrl"
QT_MOC_LITERAL(8, 97, 14) // "deleteResource"

    },
    "QDownloadWidget\0loadLevelImageSignal\0"
    "\0strImage\0loadPageSignal\0PageNumber\0"
    "downloadResource\0strUrl\0deleteResource"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDownloadWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void QDownloadWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDownloadWidget *_t = static_cast<QDownloadWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadLevelImageSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->loadPageSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->downloadResource((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->deleteResource((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDownloadWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloadWidget::loadLevelImageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDownloadWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloadWidget::loadPageSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDownloadWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloadWidget::downloadResource)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDownloadWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDownloadWidget::deleteResource)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QDownloadWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDownloadWidget.data,
      qt_meta_data_QDownloadWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDownloadWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDownloadWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDownloadWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDownloadWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QDownloadWidget::loadLevelImageSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDownloadWidget::loadPageSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDownloadWidget::downloadResource(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDownloadWidget::deleteResource(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
