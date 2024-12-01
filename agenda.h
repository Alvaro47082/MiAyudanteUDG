#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Agenda{
    string asuntoAgenda;
    char tipoAgenda;
    int diaAgenda;
    int mesAgenda;
    int anioAgenda;
    int horaAgenda;
    int minutosAgenda;
public:
    void fija_asunto(){
        cout << "Escribe el asunto: ";
        cin.ignore();
        getline(cin, asuntoAgenda);
    }

    void fija_tipo(){
        cout << "Escribe el tipo de asunto: ";
        cin >> tipoAgenda;
    }

    void fija_dia(){
        cout << "Escribe el dia: ";
        cin >> diaAgenda;
    }

    void fija_mes(){
        cout << "Escribe el mes: ";
        cin >> mesAgenda;
    }

    void fija_anio(){
        cout << "Escribe el anio: ";
        cin >> anioAgenda;
    }

    void fija_hora(){
        cout << "Escribe la hora: ";
        cin >> horaAgenda;
    }

    void fija_minutos(){
        cout << "Escribe los minutos: ";
        cin >> minutosAgenda;
    }

    string dame_asunto() const{
        return asuntoAgenda;
    }

    char dame_tipo() const{
        return tipoAgenda;
    }

    int dame_dia() const{
        return diaAgenda;
    }

    int dame_mes() const{
        return mesAgenda;
    }

    int dame_anio() const{
        return anioAgenda;
    }

    int dame_hora() const{
        return horaAgenda;
    }

    int dame_minutos() const{
        return minutosAgenda;
    }
};

#endif
