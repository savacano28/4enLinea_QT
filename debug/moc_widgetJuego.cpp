/****************************************************************************
** Meta object code from reading C++ file 'widgetJuego.h'
**
** Created: Mon 3. Dec 16:19:28 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../4enLinea/widgetJuego.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetJuego.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetJuego[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      25,   12,   12,   12, 0x0a,
      38,   12,   12,   12, 0x0a,
      51,   12,   12,   12, 0x0a,
      76,   68,   12,   12, 0x0a,
     101,   12,   12,   12, 0x0a,
     114,   12,   12,   12, 0x0a,
     129,   12,   12,   12, 0x0a,
     137,   12,   12,   12, 0x0a,
     154,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WidgetJuego[] = {
    "WidgetJuego\0\0turnoDado()\0nuevoJuego()\0"
    "jugarLinea()\0mostrartarjeta()\0row,col\0"
    "verificarResult(int,int)\0setDisplay()\0"
    "detenerJuego()\0salir()\0cambiarTarjeta()\0"
    "timeDown()\0"
};

void WidgetJuego::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetJuego *_t = static_cast<WidgetJuego *>(_o);
        switch (_id) {
        case 0: _t->turnoDado(); break;
        case 1: _t->nuevoJuego(); break;
        case 2: _t->jugarLinea(); break;
        case 3: _t->mostrartarjeta(); break;
        case 4: _t->verificarResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setDisplay(); break;
        case 6: _t->detenerJuego(); break;
        case 7: _t->salir(); break;
        case 8: _t->cambiarTarjeta(); break;
        case 9: _t->timeDown(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WidgetJuego::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetJuego::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WidgetJuego,
      qt_meta_data_WidgetJuego, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetJuego::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetJuego::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetJuego::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetJuego))
        return static_cast<void*>(const_cast< WidgetJuego*>(this));
    return QDialog::qt_metacast(_clname);
}

int WidgetJuego::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
