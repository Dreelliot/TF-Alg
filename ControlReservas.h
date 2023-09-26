#ifndef TF_CONTROLRESERVAS_H
#define TF_CONTROLRESERVAS_H

#include "Reserva.h"
#include "Lista_doble.h"


class ControlReservas {
private:
    Lista_doble<Reserva *> Reservas;
public:
    ControlReservas() {}
    
    ~ControlReservas() {
    }
    
    void a_Reserva(Reserva *R) {
        Reservas.a_frente(R);
    }
    
    void Mostrar_Reservas() {
        cout << "\n===      Reservas     ===" << endl;
        Nodo<Reserva *> *aux = Reservas.get_cabeza();
        while (aux) {
            cout << "- Nombre: " << aux->dato->getNombreR() << endl;
            cout << "- # de Personas: " << aux->dato->getCantPersonas() << endl;
            cout << "- Fecha: " << aux->dato->getFecha() << endl;
            cout << "- Hora: " << aux->dato->getHora() << endl << endl;
            aux = aux->next;
        }
        cout << endl;
    }
    
    
    void Imprimir_Reservas() {
        Nodo<Reserva *> *aux = Reservas.get_cabeza();
        fstream archivo("Reservas.txt", ios::out);
        if (!archivo.is_open()) {
            cout << "No se pudo crear el archivo.";
            return;
        }
        archivo << "\n===     Reservas     ===" << endl;
        while (aux) {
            archivo << "- Nombre: " << aux->dato->getNombreR() << endl;
            archivo << "- # de Personas: " << aux->dato->getCantPersonas() << endl;
            archivo << "- Fecha: " << aux->dato->getFecha() << endl;
            archivo << "- Hora: " << aux->dato->getHora() << endl << endl;
            aux = aux->next;
        }
        archivo.close();
    }
};

#endif //TF_CONTROLRESERVAS_H
