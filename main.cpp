#include <iostream>
#include "Lista_doble.h"
#include "Carta.h"
using namespace std;

Carta *carta =new Carta();

int main() {
    int opc = 0;
    do {
        cout << "\n=== Restaurant La Trattoria ===" << endl;
        cout << "1. Ver la carta" << endl;
        cout << "2. Hacer una reseva" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opc;
        
       switch (opc) {
            case 1:
                carta->mostrar_Carta();
                break;
            case 2:
               
               break;
            case 3:
                cout << "Saliendo, Gracias!" << endl;
                break;
            default:
                cout << "Opcion incorrecta. Por favor ingrese de nuevo" << endl;
                break;
        }
    } while (opc != 3);

    return 0;
}