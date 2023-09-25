#ifndef TF_NODO_H
#define TF_NODO_H

#include <iostream>
using namespace std;

template <class T>
class Nodo {
public:
    T dato;
    Nodo *next;
    Nodo *prev;

//constructores
    Nodo() {
        *next = nullptr;
        *prev = nullptr;
    }

    Nodo(T pdato) {
        dato = pdato;
        *next = nullptr;
        *prev = nullptr;
    }
};

#endif //TF_NODO_H
