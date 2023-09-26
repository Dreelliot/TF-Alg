#include <iostream>
#include "Lista_doble.h"
#include "Carta.h"
#include "ControlReservas.h"
#include "fstream"

using namespace std;

void menuOrden() {
    int opcO = 0;
    while (opcO == 3 || opcO == 2 || opcO == 1) {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Ordenar por cantidad de personas" << endl;
        cout << "2. Ordenar por fecha" << endl;
        cout << "3. Ordenar por Hora" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcO;
        switch (opcO) {
            case 1:
                // OrdenarCant();
                break;
            case 2:
                // OrdenarFecha();
                break;
            case 3:
                // ordenarHora();
                break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    }
}

ControlReservas *reservas = new ControlReservas();

void menuReserva() {
    
    int opcR = 0;
    while (opcR != 2) {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Realizar nueva reserva" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcR;
        switch (opcR) {
            case 1: {
                string nombreR;
                int cantPersonas;
                long long fecha;
                int hora;
                cout << "Nombre: ";
                cin >> nombreR;
                cout << "Nro Personas: ";
                cin >> cantPersonas;
                cout << "Fecha: ";
                cin >> fecha;
                cout << "Hora: ";
                cin >> hora;
                reservas->a_Reserva(new Reserva(nombreR, cantPersonas, fecha, hora));
            }
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
    int opcA = 0;
    while (opcA != 4) {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "===         Admin           ===" << endl;
        cout << "1. Ver las reservas" << endl;
        cout << "2. Ordenar las reservas" << endl;
        cout << "3. Imprimir las reservas" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcA;
        
        switch (opcA) {
            case 1:
                reservas->Mostrar_Reservas();
                break;
            case 2:
                menuOrden();
                break;
            case 3: {
                reservas->Imprimir_Reservas();
                break;
            }
            case 4:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    }
}

Carta *carta = new Carta();

int main() {
    int opc = 0;
    
    do {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Ver la carta" << endl;
        cout << "2. Hacer una reseva" << endl;
        cout << "3. Menu Admin" << endl;
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
                cout << "\nSaliendo, Gracias!" << endl;
                break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    } while (opc != 4);
    
    return 0;
}