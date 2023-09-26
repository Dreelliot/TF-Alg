#ifndef TF_RESERVA_H
#define TF_RESERVA_H

#include "Lista_doble.h"
#include <string>
#include <fstream>

class Reserva {
protected:
    string nombreR;
    int cantPersonas;
    long long fecha;
    int hora;
public:
    Reserva(string nombreR, int cantPersonas, long long fecha, int hora) {
        this->nombreR = nombreR;
        this->cantPersonas = cantPersonas;
        this->fecha = fecha;
        this->hora = hora;
    }
    
    Reserva() : nombreR(""), cantPersonas(0), fecha(0), hora(0) {}
    
    ~Reserva() {
        this->nombreR = "";
        this->cantPersonas = 0;
        this->fecha = 0;
        this->hora = 0;
    }
    
    string getNombreR() {
        return nombreR;
    }
    
    int getCantPersonas() {
        return cantPersonas;
    }
    
    long long getFecha() {
        return fecha;
    }
    
    int getHora() {
        return hora;
    }
    
    
    
    /*void Mostrar_Reservas(Nodo<Reserva*>* reservas){
         cout << "===      Reservas     ===" << endl;
         Nodo<Reserva*>* aux = reservas;
        if(aux->next== nullptr){
            cout<<"No hay reservas registradas";
        }
         while (aux->next) {
             cout << aux->dato->nombreR<<endl;
             cout<<aux->dato->cantPersonas<<endl;
             cout<<aux->dato->fecha<<endl;
             cout<<aux->dato->hora<<endl<<endl;
             aux = aux->next;
         }
         cout << endl;
     }
     void Imprimir_Reservas(Nodo<Reserva*>* reservas){
         fstream fichout("Reservas.txt",ios::out);
         if (!fichout) {
             cout << "No se pudo crear el archivo.";
         }
         Nodo<Reserva*>* aux = reservas;
         if(aux->next== nullptr) {
             cout << "No hay reservas registradas";
         }
         fichout<< "===     Reserva     ===" << endl;
         while (aux->next) {
             fichout << aux->dato->nombreR<<endl;
             fichout <<aux->dato->cantPersonas<<endl;
             fichout<<aux->dato->fecha<<endl;
             fichout<<aux->dato->hora<<endl<<endl;
             aux = aux->next;
         }
     }*/
    
};

#endif //TF_RESERVA_H
