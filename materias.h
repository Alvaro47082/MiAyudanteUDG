#ifndef MATERIAS_H
#define MATERIAS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Materias{
    string nombreMateria;
    string acronimoMateria;
    string profesorMateria;
    string diasMateria;
    int horaInicioMateria;
    int horaFinalMateria;

public:
    void fija_nombre(){
        cout << "Escribe el nombre de la materia: ";
        cin.ignore();
        getline(cin, nombreMateria);
    }

    void fija_acronimo(){
        cout << "Escribe el acronimo de la materia: ";
        getline(cin, acronimoMateria);
    }

    void fija_profesor(){
        cout << "Escribe el profesor que imparte esta materia: " << endl;
        getline(cin, profesorMateria);
    }

    void fija_dias(){
        cout << "Escriba los dias en que se imparte la materia: ";
        getline(cin, diasMateria);
    }

    void fija_hora_inicio(){
        cout << "Escribe la hora de inicio: ";
        cin >> horaInicioMateria;
    }

    void fija_hora_final(){
        cout << "Escribe la hora de final: ";
        cin >> horaFinalMateria;
    }

    string dame_nombre() const{
        return nombreMateria;
    }

    string dame_acronimo() const{
        return acronimoMateria;
    }

    string dame_profesor() const{
        return profesorMateria;
    }

    string dame_dias() const{
        return diasMateria;
    }

    int dame_hora_inicio() const{
        return horaInicioMateria;
    }

    int dame_hora_final() const{
        return horaFinalMateria;
    }
};

#endif
