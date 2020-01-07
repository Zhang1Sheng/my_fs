/****************************************************************************
** Meta object code from reading C++ file 'dialog_download.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialog_download.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_download.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_download_t {
    QByteArrayData data[6];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_download_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_download_t qt_meta_stringdata_Dialog_download = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Dialog_download"
QT_MOC_LITERAL(1, 16, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(4, 74, 5), // "value"
QT_MOC_LITERAL(5, 80, 23) // "on_textEdit_textChanged"

    },
    "Dialog_download\0on_pushButton_2_clicked\0"
    "\0on_horizontalSlider_valueChanged\0"
    "value\0on_textEdit_textChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_download[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void Dialog_download::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog_download *_t = static_cast<Dialog_download *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_textEdit_textChanged(); break;
        default: ;
        }
    }
}

const QMetaObject Dialog_download::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_download.data,
      qt_meta_data_Dialog_download,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog_download::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_download::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_download.stringdata0))
        return static_cast<void*>(const_cast< Dialog_download*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_download::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
