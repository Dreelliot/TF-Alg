#ifndef TF_CLIENTE_H
#define TF_CLIENTE_H

#include <iostream>
using namespace std;

class Cliente {
private:
//propiedades
    string nombre;
    string apellido;
    string direccion;
    int telefono;
public:
    Cliente() {
        this->nombre = "";
        this->apellido = "";
        this->direccion = "";
        this->telefono = 0;
    }
    
    Cliente(string pNombre, string pApellido, string pDireccion, int pTelefono) {
        this->nombre = pNombre;
        this->apellido = pApellido;
        this->direccion = pDireccion;
        this->telefono = pTelefono;
    }

//Metodos de Servicio
    void mostrarClientes() {
        cout << "\n";
        cout << "DATOS DEL CLIENTE" << endl;
        cout << "Nombre: " << endl;
        cout << "Apellido: " << endl;
        cout << "Direccion: " << endl;
        cout << "Telefono: " << endl;
    }
};

#endif //TF_CLIENTE_H
