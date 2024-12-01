#ifndef EVALUACION_H
#define EVALUACION_H
#include <iostream>

using namespace std;

class Evaluacion{
    int actividadesEvaluacion[9];
    int sumaActividadesEvaluacion;
    int examenesEvaluacion[3];
    int sumaExamenesEvaluacion;
    int tareasEvaluacion;
    int asistenciasEvaluacion;
    int retardosEvaluacion;
    int puntosExtraEvaluacion;
public:
    void fija_actividades(){
        int i,actividades[9],sumaActividades;
        for(i=1;i<10;i++){
            cout << "Escribe la puntuacion obtenida en la actividad " << i << ": ";
            cin >> actividades[i];
            sumaActividades += actividades[i];
        }
        sumaActividadesEvaluacion = sumaActividades;
    }
    void fija_examenes(){
        int i,examenes[3],sumaExamenes;
        for(i=1;i<4;i++){
            cout << "Escribe la puntuacion obtenida en el examen " << i << ": ";
            cin >> examenes[i];
            sumaExamenes += examenes[i];
        }
        sumaExamenesEvaluacion = sumaExamenes;
    }
    void fija_tareas(){
        int tareas;
        cout << "Escribe la cantidad de tareas realizadas: ";
        cin >> tareas;
        tareasEvaluacion = tareas;
    }
    void fija_asistencias(){
        int asistencias;
        cout << "Escribe tus asistencias: ";
        cin >> asistencias;
        asistenciasEvaluacion = asistencias;
    }
    void fija_retardos(){
        int retardos;
        cout << "Esribe tus retardos: ";
        cin >> retardos;
        retardosEvaluacion = retardos;
    }
    void fija_puntos_extra(){
        int puntosExtra;
        cout << "Escribe tus puntos extra: ";
        cin >> puntosExtra;
        puntosExtraEvaluacion = puntosExtra;
    }
    int dame_actividades(){
        return sumaActividadesEvaluacion;
    }
    int dame_examenes(){
        return sumaExamenesEvaluacion;
    }
    int dame_tareas(){
        return tareasEvaluacion;
    }
    int dame_asistencias(){
        return asistenciasEvaluacion;
    }
    int dame_retardos(){
        return retardosEvaluacion;
    }
    int dame_puntos_extra(){
        return puntosExtraEvaluacion;
    }
};

#endif
