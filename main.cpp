#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include "Evaluacion.cpp"
#include "materias.h"
#include "tareas.h"
#include "globales.h"
#include "agenda.h"
#include "notas.h"
//a8poo0124aTresCinco
//Tiempo: 03:00

using namespace std;

vector<Materias> listaMaterias;
vector<Tareas> listaTareas;
vector<Agenda> listaRecordatorios;
vector<Notas> listaNotas;

int menuPrincipal();

void agregarMateria(vector<Materias>& materias){
    cout << endl << "------ Agregar materia ------" << endl;
    if(materias.size() >= MAX_MATERIAS){
        cout << "Maximo de materias alcanzado" << endl;
        return;
    }
    Materias nuevaMateria;
    nuevaMateria.fija_nombre();
    nuevaMateria.fija_acronimo();
    nuevaMateria.fija_profesor();
    nuevaMateria.fija_dias();
    nuevaMateria.fija_hora_inicio();
    nuevaMateria.fija_hora_final();
    materias.push_back(nuevaMateria);
    cout << endl;
}

void listarMaterias(const vector<Materias>& materias){
    cout << endl << "------ Listar materias ------" << endl;
    size_t i;
    cout << "#\tAcronimo\tNombre\tProfesor\tDias\tInicio\tFin" << endl;
    for(i=0;i< materias.size();i++){
        cout << i + 1 << "\t" << materias[i].dame_acronimo() << "\t" << materias[i].dame_nombre()
        << "\t" << materias[i].dame_profesor() << "\t" << materias[i].dame_dias()
        << "\t" << materias[i].dame_hora_inicio() << "\t" << materias[i].dame_hora_final() << endl;
    }
    cout << endl;
}

void mostrarMateria(const vector<Materias>& materias, size_t index){
    cout << endl << "------ Mostrar materias ------" << endl;
    if(index < materias.size()){
        cout << "Nombre: " << materias[index].dame_nombre() << endl;
        cout << "Acronimo: " << materias[index].dame_acronimo() << endl;
        cout << "Profesor: " << materias[index].dame_profesor() << endl;
        cout << "Dias: " << materias[index].dame_dias() << endl;
        cout << "Hora de inicio: " << materias[index].dame_hora_inicio() << endl;
        cout << "Hora de final: " << materias[index].dame_hora_final() << endl;
    }else{
        cout << "Id de materia no valida" << endl;
    }
    cout << endl;
}

void modificarMateria(vector<Materias>& materias, size_t index){
    cout << endl << "------ Modificar materia ------" << endl;
    if (index < materias.size()) {
        materias[index].fija_nombre();
        materias[index].fija_acronimo();
        materias[index].fija_profesor();
        materias[index].fija_dias();
        materias[index].fija_hora_inicio();
        materias[index].fija_hora_final();
    } else {
        cout << "Id de materia no valida" << endl;
    }
    cout << endl;
}

void eliminarMateria(vector<Materias>& materias, size_t index){
    cout << endl << "------ Eliminar materia ------" << endl;
    if(index < materias.size()){
        materias.erase(materias.begin() + index);
    }else{
        cout << "Id de materia no valida" << endl;
    }
    cout << endl;
}

void agregarTarea(vector<Tareas>& tareas){
    cout << endl << "------ Agregar tarea ------" << endl;
     if(tareas.size() >= MAX_TAREAS){
        cout << "Maximo de tareas alcanzado" << endl;
        return;
    }
    Tareas nuevaTarea;
    nuevaTarea.fija_asunto();
    nuevaTarea.fija_descripcion();
    nuevaTarea.fija_materia();
    tareas.push_back(nuevaTarea);
    cout << endl;
}

void listarTareas(const vector<Tareas>& tareas){
    size_t i;
    cout << endl << "------ Listar tareas ------" << endl;
    cout << "#\tAsunto\tDescripcion\tMateria" << endl;
    for(i=0;i<tareas.size();i++){
        cout << i + 1 << "\t" << tareas[i].dame_asunto() << "\t" << tareas[i].dame_descripcion()
        << "\t" << tareas[i].dame_materia() << endl;
    }
    cout << endl;
}

void mostrarTarea(const vector<Tareas>& tareas, size_t index){
    cout << endl << "------ Mostrar tareas ------" << endl;
    if(index < tareas.size()){
        cout << "Asunto: " << tareas[index].dame_asunto() << endl;
        cout << "Descripcion: " << tareas[index].dame_descripcion() << endl;
        cout << "Materia: " << tareas[index].dame_materia() << endl;
    } else {
        cout << "Id de tarea no valida" << endl;
    }
    cout << endl;
}

void modificarTarea(vector<Tareas>& tareas, size_t index){
    cout << endl << "------ Modificar tarea ------" << endl;
    if(index < tareas.size()){
        tareas[index].fija_asunto();
        tareas[index].fija_descripcion();
        tareas[index].fija_materia();
    }else{
        cout << "Id de tarea no valida" << endl;
    }
    cout << endl;
}

void eliminarTarea(vector<Tareas>& tareas, size_t index){
    cout << endl << "------ Eliminar tarea ------" << endl;
    if(index < tareas.size()){
        tareas.erase(tareas.begin() + index);
    }else{
        cout << "Id de tarea no valida" << endl;
    }
    cout << endl;
}

void agregarRecordatorio(vector<Agenda>& recordatorios){
    cout << endl << "------ Agregar recordatorio ------" << endl;
    if (recordatorios.size() >= MAX_RECORDATORIOS) {
        cout << "Maximo de recordatorios alcanzado" << endl;
        return;
    }
    Agenda nuevoRecordatorio;
    nuevoRecordatorio.fija_asunto();
    nuevoRecordatorio.fija_tipo();
    nuevoRecordatorio.fija_dia();
    nuevoRecordatorio.fija_mes();
    nuevoRecordatorio.fija_anio();
    nuevoRecordatorio.fija_hora();
    nuevoRecordatorio.fija_minutos();
    recordatorios.push_back(nuevoRecordatorio);
    cout << endl;
}

void listarRecordatorios(const vector<Agenda>& recordatorios) {
    cout << endl << "------ Agregar recordatorio ------" << endl;
    size_t i;
    cout << "#\tAsunto\tTipo\tFecha\tHora" << endl;
    for(i=0;i<recordatorios.size();i++){
        cout << i + 1 << "\t" << recordatorios[i].dame_asunto() << "\t" <<
        recordatorios[i].dame_tipo() << "\t" << recordatorios[i].dame_dia() << "/" <<
        recordatorios[i].dame_mes() << "/" << recordatorios[i].dame_anio() << "\t" <<
        recordatorios[i].dame_hora() << ":" << recordatorios[i].dame_minutos() << endl;
    }
    cout << endl;
}

void mostrarRecordatorio(const vector<Agenda>& recordatorios, size_t index){
    cout << endl << "------ Mostrar recordatorio ------" << endl;
    if(index < recordatorios.size()){
        cout << "Asunto: " << recordatorios[index].dame_asunto() << endl;
        cout << "Tipo: " << recordatorios[index].dame_tipo() << endl;
        cout << "Fecha: " << recordatorios[index].dame_dia() << "/" <<
        recordatorios[index].dame_mes() << "/" << recordatorios[index].dame_anio() << endl;
        cout << "Hora: " << recordatorios[index].dame_hora() << ":" <<
        recordatorios[index].dame_minutos() << endl;
    }else{
        cout << "Id de recordatorio no valida" << endl;
    }
    cout << endl;
}

void modificarRecordatorio(vector<Agenda>& recordatorios, size_t index){
    cout << endl << "------ Modificar recordatorio ------" << endl;
    if(index < recordatorios.size()){
        recordatorios[index].fija_asunto();
        recordatorios[index].fija_tipo();
        recordatorios[index].fija_dia();
        recordatorios[index].fija_mes();
        recordatorios[index].fija_anio();
        recordatorios[index].fija_hora();
        recordatorios[index].fija_minutos();
    }else{
        cout << "Id de recordatorio no valida" << endl;
    }
    cout << endl;
}

void eliminarRecordatorio(vector<Agenda>& recordatorios, size_t index){
    cout << endl << "------ Eliminar recordatorio ------" << endl;
    if(index < recordatorios.size()){
        recordatorios.erase(recordatorios.begin() + index);
    }else{
        cout << "Id de recordatorio no valida" << endl;
    }
    cout << endl;
}

void agregarNota(vector<Notas>& notas){
    cout << endl << "------ Agregar nota ------" << endl;
    if(notas.size() >= MAX_NOTAS){
        cout << "Maximo de notas alcanzado" << endl;
        return;
    }
    Notas nuevaNota;
    nuevaNota.fija_descripcion();
    notas.push_back(nuevaNota);
    cout << endl;
}

void listarNotas(const vector<Notas>& notas){
    cout << endl << "------ Listar notas ------" << endl;
    size_t i;
    cout << "#\tDescripcion" << endl;
    for(i=0;i<notas.size();i++){
        cout << i + 1 << "\t" << notas[i].dame_descripcion() << endl;
    }
    cout << endl;
}

void mostrarNota(const vector<Notas>& notas, size_t index){
    cout << endl << "------ Mostrar notas ------" << endl;
    if(index < notas.size()){
        cout << "Descripcion: " << notas[index].dame_descripcion() << endl;
    }else{
        cout << "Id de nota no valida" << endl;
    }
    cout << endl;
}

void modificarNota(vector<Notas>& notas, size_t index){
    cout << endl << "------ Modificar nota ------" << endl;
    if (index < notas.size()){
        notas[index].fija_descripcion();
    }else{
        cout << "Id de nota no valida" << endl;
    }
    cout << endl;
}

void eliminarNota(vector<Notas>& notas, size_t index){
    cout << endl << "------ Eliminar nota ------" << endl;
    if(index < notas.size()){
        notas.erase(notas.begin() + index);
    }else{
        cout << "Id de nota no valida" << endl;
    }
}

void pausa() {
    cout << "Presiona enter para continuar..." << endl;
    cin.ignore();
    cin.get();
}

int main(){
    int opc1=0;
    int opc2=0;
    int opc3=0;
    int opc4=0;
    int opc5=0;
    cout << "Ayudante escolar UDG v1.0" << endl << endl;
    do{
        system("CLS");
        opc1 = menuPrincipal();
        switch (opc1){
            case 1:
                system("CLS");
                evaluacionMain();
                pausa();
                break;
        case 2:
            do{
                system("CLS");
                cout << "GESTION DE MATERIAS" << endl;
                cout << "1. Agregar materia" << endl;
                cout << "2. Listar materias" << endl;
                cout << "3. Mostrar detalles de una materia" << endl;
                cout << "4. Modificar una materia" << endl;
                cout << "5. Eliminar materia" << endl;
                cout << "6. Guardar cambios" << endl;
                cout << "7. Volver al menu principal" << endl;
                cout << "Elije una opcion valida: ";
                cin >> opc2;
                switch(opc2){
                case 1: agregarMateria(listaMaterias);
                pausa();
                break;
                case 2: listarMaterias(listaMaterias);
                pausa();
                break;
                case 3: {
                size_t id;
                cout << "Ingrese la id de la materia a mostrar: ";
                cin >> id;
                cin.ignore();
                mostrarMateria(listaMaterias, id - 1);
                pausa();
                break;
                }
                case 4: {
                size_t id;
                cout << "Ingrese la id de la materia a modificar: ";
                cin >> id;
                cin.ignore();
                modificarMateria(listaMaterias, id - 1);
                pausa();
                break;
                }
                case 5: {
                size_t id;
                cout << "Ingrese la id de la materia a eliminar: ";
                cin >> id;
                cin.ignore();
                eliminarMateria(listaMaterias, id - 1);
                pausa();
                break;
                }
                case 6: cout << "Apartado en construccion" << endl;
                pausa();
                break;
                case 7: cout << "Volviendo al menu principal..." << endl << endl;
                pausa();
                break;
                default: cout << "Error, elije una opcion valida" << endl;
                pausa();
                break;
                }
            }while(opc2!=7);
            break;
        case 3:
            do{
                system("CLS");
                cout << "CONTROL DE TAREAS" << endl;
                cout << "1. Agregar tarea" << endl;
                cout << "2. Listar tareas" << endl;
                cout << "3. Mostrar detalles de una tarea" << endl;
                cout << "4. Modificar una tarea" << endl;
                cout << "5. Eliminar tarea" << endl;
                cout << "6. Guardar cambios" << endl;
                cout << "7. Volver al menu principal" << endl;
                cout << "Elije una opcion valida: ";
                cin >> opc3;
                switch(opc3){
                case 1: agregarTarea(listaTareas);
                pausa();
                break;
                case 2: listarTareas(listaTareas);
                pausa();
                break;
                case 3: {
                size_t id;
                cout << "Ingresa la id de la tarea a mostrar: ";
                cin >> id;
                cin.ignore();
                mostrarTarea(listaTareas, id - 1);
                pausa();
                break;
                }
                case 4: {
                size_t id;
                cout << "Ingresa la id de la tarea a modificar: ";
                cin >> id;
                cin.ignore();
                modificarTarea(listaTareas, id - 1);
                pausa();
                break;
                }
                case 5: {
                size_t id;
                cout << "Ingresa la id de la tarea a eliminar: ";
                cin >> id;
                cin.ignore();
                eliminarTarea(listaTareas, id - 1);
                pausa();
                break;
                }
                case 6: cout << "Apartado en construccion" << endl;
                pausa();
                break;
                case 7: cout << "Volviendo al menu principal..." << endl << endl;
                pausa();
                break;
                default: cout << "Error, elije una opcion valida" << endl;
                pausa();
                break;
                }
            }while(opc3!=7);
            break;
        case 4:
            do{
                system("CLS");
                cout << "AGENDA" << endl;
                cout << "1. Agregar recordatorio" << endl;
                cout << "2. Listar recordatorios" << endl;
                cout << "3. Mostrar detalles de un recordatorio" << endl;
                cout << "4. Modificar un recordatorio" << endl;
                cout << "5. Eliminar recordatorio" << endl;
                cout << "6. Guardar cambios" << endl;
                cout << "7. Volver al menu principal" << endl;
                cout << "Elije una opcion valida: ";
                cin >> opc4;
                switch(opc4){
                case 1: agregarRecordatorio(listaRecordatorios);
                pausa();
                break;
                case 2: listarRecordatorios(listaRecordatorios);
                pausa();
                break;
                case 3: {
                size_t id;
                cout << "Ingrese la id del recordatorio a mostrar: ";
                cin >> id;
                cin.ignore();
                mostrarRecordatorio(listaRecordatorios, id - 1);
                pausa();
                break;
                }
                case 4: {
                size_t id;
                cout << "Ingrese la id del recordatorio a modificar: ";
                cin >> id;
                cin.ignore();
                modificarRecordatorio(listaRecordatorios, id - 1);
                pausa();
                break;
                }
                case 5: {
                size_t id;
                cout << "Ingrese el índice del recordatorio a eliminar: ";
                cin >> id;
                cin.ignore();
                eliminarRecordatorio(listaRecordatorios, id - 1);
                pausa();
                break;
                }
                case 6: cout << "Apartado en construccion" << endl;
                pausa();
                break;
                case 7: cout << "Volviendo al menu principal..." << endl << endl;
                pausa();
                break;
                default: cout << "Error, elije una opcion valida" << endl;
                pausa();
                break;
                }
            }while(opc4!=7);
        break;
        case 5:
            do{
                system("CLS");
                cout << "BLOC DE NOTAS" << endl;
                cout << "1. Agregar nota" << endl;
                cout << "2. Listar notas" << endl;
                cout << "3. Mostrar detalles de una nota" << endl;
                cout << "4. Modificar una nota" << endl;
                cout << "5. Eliminar nota" << endl;
                cout << "6. Guardar cambios" << endl;
                cout << "7. Volver al menu principal" << endl;
                cout << "Elije una opcion valida: ";
                cin >> opc5;
                switch(opc5){
                case 1:
                agregarNota(listaNotas);
                pausa();
                break;
                case 2:
                listarNotas(listaNotas);
                pausa();
                break;
                case 3: {
                size_t id;
                cout << "Ingrese la id de la nota a mostrar: ";
                cin >> id;
                cin.ignore();
                mostrarNota(listaNotas, id - 1);
                pausa();
                break;
                }
                case 4: {
                size_t id;
                cout << "Ingrese la id de la nota a modificar: ";
                cin >> id;
                cin.ignore();
                modificarNota(listaNotas, id - 1);
                pausa();
                break;
                }
                case 5: {
                size_t id;
                cout << "Ingrese la id de la nota a eliminar: ";
                cin >> id;
                cin.ignore();
                eliminarNota(listaNotas, id - 1);
                pausa();
                break;
                }
                case 6: cout << "Apartado en construccion" << endl;
                pausa();
                break;
                case 7: cout << "Volviendo al menu principal..." << endl << endl;
                pausa();
                break;
                default: cout << "Error, elije una opcion valida" << endl;
                pausa();
                break;
                }
            }while(opc5!=7);
        break;
        case 6: cout << "Gracias por su preferencia, tenga un buen dia :D" << endl;
        break;
        default: cout << "Error, opcion invalida" << endl;
        pausa();
        break;
        }
    }  while(opc1!=6);
    return 0;
}

int menuPrincipal(){
    int opc;
    cout << "MENU PRINCIPAL" << endl;
    cout << "1. Evaluacion del curso" << endl;
    cout << "2. Gestion de materias" << endl;
    cout << "3. Control de tareas" << endl;
    cout << "4. Agenda" << endl;
    cout << "5. Bloc de notas" << endl;
    cout << "6. Salir" << endl;
    cout << "Elija una opcion valida: ";
    cin >> opc;
    return opc;
}
