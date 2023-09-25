#ifndef TF_LISTA_DOBLE_H
#define TF_LISTA_DOBLE_H

#include "Nodo.h"
using namespace std;

template <class T>
class Lista_doble{
private:
    Nodo<T>* cabeza;
    Nodo<T>* cola;
    int tamanio;
public:
    Lista_doble():cabeza(nullptr),cola(nullptr),tamanio(0){}
    ~Lista_doble(){
        limpiar();
    }

    void a_frente(T pdato){
     auto newNodo = new Nodo<T>(pdato);
   if(es_vacio()){
       cabeza=cola=newNodo;
   }else{
        newNodo->next=cabeza;
        cabeza->prev=newNodo;
        cabeza=newNodo;
   }
   tamanio++;
    }

    void a_atras(T dato){
        Nodo<T>* newNodo=new Nodo<T>(dato);
        if(es_vacio()){
            cabeza=cola=newNodo;
        }else{
            newNodo->prev=cola;
            cola->next=newNodo;
            cola=newNodo;
        }
    tamanio++;
    }

    void quitar_frente(){
    if(es_vacio()){
        return;
    }else{
        Nodo<T>*aux=cabeza;
        cabeza=cabeza->next;
        if(cabeza){//revisa si la nueva cabeza no es null
            cabeza->prev= nullptr;
        delete aux;
        }
        tamanio--;
        }
    }

    void quitar_atras(){
        if(es_vacio()){
            return;
        }else{
            Nodo<T>* aux=cola;
            cola=cola->prev;
            if(cola){
                cola->next= nullptr;
                delete aux;
            }
                tamanio--;
        }
    }

    int get_tamanio(){
        return tamanio;
    }
    Nodo<T>* get_cabeza(){return cabeza;}

    bool es_vacio(){
        return tamanio == 0;
    }

    void limpiar(){
        while(!es_vacio()){quitar_atras();
        }
    }

    void imprimir_lista_doble(){
        Nodo<T>* aux=cabeza;
        while(aux){
            cout<<aux->dato<<" ";
            aux=aux->next;
        }
        cout<< endl;
    }
};

#endif //TF_LISTA_DOBLE_H
