/****************************************************************************
** Meta object code from reading C++ file 'scorewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lab04/scorewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scorewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScoreWindow_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScoreWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScoreWindow_t qt_meta_stringdata_ScoreWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ScoreWindow"
QT_MOC_LITERAL(1, 12, 22), // "on_writeButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_exportButton_clicked"
QT_MOC_LITERAL(4, 60, 23), // "on_importButton_clicked"
QT_MOC_LITERAL(5, 84, 19), // "on_btnQuery_clicked"
QT_MOC_LITERAL(6, 104, 13), // "OutputTheInfo"
QT_MOC_LITERAL(7, 118, 9), // "tableName"
QT_MOC_LITERAL(8, 128, 11) // "csvFileName"

    },
    "ScoreWindow\0on_writeButton_clicked\0\0"
    "on_exportButton_clicked\0on_importButton_clicked\0"
    "on_btnQuery_clicked\0OutputTheInfo\0"
    "tableName\0csvFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScoreWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    2,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,

       0        // eod
};

void ScoreWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScoreWindow *_t = static_cast<ScoreWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_writeButton_clicked(); break;
        case 1: _t->on_exportButton_clicked(); break;
        case 2: _t->on_importButton_clicked(); break;
        case 3: _t->on_btnQuery_clicked(); break;
        case 4: _t->OutputTheInfo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ScoreWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ScoreWindow.data,
      qt_meta_data_ScoreWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScoreWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScoreWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScoreWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ScoreWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
