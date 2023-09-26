#ifndef TF_BUBBLESORT_H
#define TF_BUBBLESORT_H
#include "Lista_doble.h"

/*template<typename T>
auto swap = [](Lista_doble<T>* cabeza){
Nodo<T>* aux = cabeza;
};*/

template<class T>
class BubbleSort{
public:
    void swap(Lista_doble<T>* cabeza){
        Nodo<T>* aux = cabeza;
        aux->dato = aux->next->dato;
        aux->next->dato = aux;
    }
    void OrdenarCant(){
    
    }
};

#endif //TF_BUBBLESORT_H
