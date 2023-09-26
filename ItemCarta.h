#ifndef TF_ITEMCARTA_H
#define TF_ITEMCARTA_H

#include "Lista_doble.h"

class ItemCarta {
private:
    string nombre;
    float precio;
public:
    ItemCarta(string nombre, float precio) {
        this->nombre = nombre;
        this->precio = precio;
    }
    ItemCarta() {
        this->nombre = "";
        this->precio = 0;
    }
    
    string getNombre() {
        return nombre;
    }
    float getPrecio() {
        return precio;
    }
};

#endif //TF_ITEMCARTA_H
