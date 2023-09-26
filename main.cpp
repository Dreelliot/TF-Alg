#include <iostream>
#include "Lista_doble.h"
#include "Carta.h"
#include "Reserva.h"
#include "fstream"
using namespace std;



void menuOrden(){
    int opcO;
    while (opcO != 3||opcO!=2||opcO!=1) {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Ordenar por cantidad de personas" << endl;
        cout << "2. Ordenar por fecha" << endl;
        cout << "3. Ordenar por Hora" << endl;
        cout << "Ingrese la opcion: ";
        cin<<opcO;
        switch (opcO) {
            case 1:
               // OrdenarCant();
                break;
            case 2:
                //OrdenarRecha();
                break;
            case 3:
                //ordenarHora();
                break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    }
}
Lista_doble<Reserva *> reserva=*new Lista_doble<Reserva*>();
Nodo<Reserva *> *reservas;
void menuReserva() {
    int opcR;
    while (opcR != 3) {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Realizar nueva reserva" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese la opcion: ";
        cin>>opcR;
        switch (opcR) {
            case 1:{
                int
                reserva. }
                break;
            case 2:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    }
}

void menuAdmin() {
    int opcA;
    while (opcA != 4) {
            cout << "\n=== Restaurant La Trattoria ===" << endl;
            cout << "1. Ver las reservas" << endl;
            cout << "2. Ordenar las reservas" << endl;
            cout << "3. Imprimir las reservas"<<endl;
            cout << "4. Salir" << endl;
            cout << "Ingrese la opcion: ";
            cin >> opcA;
            
            switch (opcA) {
                case 1:
                    reserva->dato->Mostrar_Reservas(**reservas);
                    break;
                case 2:
                    menuOrden();
                    break;
                case 3:{
                    fstream archivo("Reservas.txt",ios::out);
                    break;}
                case 4:
                    cout << "Saliendo" << endl;
                    break;
                default:
                    cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                    break;
            }
        }
}

Carta *carta =new Carta();
//Nodo<Reserva*> **reservas=new Nodo<Reserva*>*;
//Lista_doble<Reserva*>*reserva;
int main() {
    
    int opc = 0;
    
    while (opc != 4){
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Ver la carta" << endl;
        cout << "2. Hacer una reseva" << endl;
        cout << "3. Menu Admin"<<endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opc;
        
       switch (opc) {
            case 1:
                carta->mostrar_Carta();
                break;
            case 2:
               menuReserva();
               break;
            case 3:
                menuAdmin();
                break;
           case 4:
               cout << "Saliendo, Gracias!" << endl;
               break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    }

    return 0;
}