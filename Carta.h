#ifndef TF_CARTA_H
#define TF_CARTA_H

#include "Lista_doble.h"
#include "ItemCarta.h"

class Carta{
private:

public:
    //Lista_doble<ItemCarta*>*menu=new Lista_doble<ItemCarta*>();
    Lista_doble<ItemCarta*> menu;
    Carta(){
        menu.a_frente(new ItemCarta("Spaghetti/Fettuccine Bolognesa", 30.00));
        menu.a_frente(new ItemCarta("Spaghetti/Fetuccine Alfredo", 28.00));
        menu.a_frente(new ItemCarta("Spaghetti/Fetuccine Carbonara", 30.00));
        menu.a_frente(new ItemCarta("Spaghetti/Fetuccine Al Pesto", 28.00));
        menu.a_frente(new ItemCarta("Lasagna de carne", 40.00));
        menu.a_frente(new ItemCarta("Canelones de carne", 55.00));
        menu.a_frente(new ItemCarta("Ravioles de carne", 40.00));
    }
    void mostrar_Carta(){
        cout << "===       Carta       ===" << endl;
       Nodo<ItemCarta*>* aux = menu.get_cabeza();
        
        while(aux){
            cout<<aux->dato->getNombre()<<"    "<<"S/. "<<aux->dato->getPrecio();
            aux=aux->next;
        }
        cout<< endl;
    }
    
};


#endif //TF_CARTA_H
