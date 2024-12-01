#ifndef TAREAS_H
#define TAREAS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Tareas{
    string asuntoTarea;
    string descripcionTarea;
    string materiaTarea;
public:
    void fija_asunto(){
        cout << "Escribe el asunto: ";
        getline(cin, asuntoTarea);
    }

    void fija_descripcion(){
        cout << "Escribe la descripcion: ";
        getline(cin, descripcionTarea);
    }

    void fija_materia(){
        cout << "Escribe la materia correspondiente: ";
        getline(cin, materiaTarea);
    }

    string dame_asunto() const{
        return asuntoTarea;
    }

    string dame_descripcion() const{
        return descripcionTarea;
    }

    string dame_materia() const{
        return materiaTarea;
    }
};

#endif
