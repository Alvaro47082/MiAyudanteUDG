#ifndef NOTAS_H
#define NOTAS_H

#include <iostream>
#include <string>

using namespace std;

class Notas {
    string descripcionNotas;
public:
    void fija_descripcion(){
        cout << "Escribe la descripcion de la nota: " << endl;
        cin.ignore();
        getline(cin, descripcionNotas);
    }

    string dame_descripcion() const{
        return descripcionNotas;
    }
};

#endif
