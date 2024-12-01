#include <iostream>
#include "Evaluacion.h"
#include "globales.h"

using namespace std;

Evaluacion evaluacion;

int evaluacionMain(){
    float promedioActividades, promedioExamenes;
    float totalAsistencias, totalActividades, totalExamenes, totalTareas, calificacionFinal;
    cout << "EVALUACION DEL CURSO" << endl << endl;
    cout << "------ Actividades ------" << endl;
            evaluacion.fija_actividades();
            cout << endl << "------ Examenes ------" << endl;
            evaluacion.fija_examenes();
            cout << endl << "------ Tareas ------" << endl;
            evaluacion.fija_tareas();
            cout << endl << "------ Asistencias ------" << endl;
            evaluacion.fija_asistencias();
            cout << endl << "------ Retardos ------" << endl;
            evaluacion.fija_retardos();
            cout << endl << "------ Puntos extra ------" << endl;
            evaluacion.fija_puntos_extra();
            cout << endl;
            promedioActividades = (evaluacion.dame_actividades() * 100.00)/900.00;
            promedioExamenes = (evaluacion.dame_examenes() * 100.00)/300.00;
            totalAsistencias = (evaluacion.dame_asistencias() * 100.00)/MAX_ASISTENCIAS;
            totalActividades = (promedioActividades * PRC_ACTIVIDADES)/100.00;
            totalExamenes = (promedioExamenes * PRC_EXAMENES)/100.00;
            totalTareas = (evaluacion.dame_tareas() * PRC_TAREAS)/10.00;
            calificacionFinal = totalActividades + totalExamenes + totalTareas +
            evaluacion.dame_puntos_extra();
            cout << endl << "------ Calificacion final ------" << endl;
            cout << "Total de asistencias: " << evaluacion.dame_asistencias() << endl;
            cout << "Porcentaje de asistencias: " << totalAsistencias << endl;
            cout << "Promedio final: " << calificacionFinal << endl;
            if(calificacionFinal > 59){
                cout << "Calificacion aprobatoria" << endl;
            }
            if(calificacionFinal < 60){
                cout << "Calificacion no aprobatoria" << endl;
            }
            if(totalAsistencias < 80){
                cout << "El alumno no tiene derecho a ordinario" << endl;
            }
            if(evaluacion.dame_retardos() > 4){
                cout << "El alumno no tiene derecho a ordinario" << endl;
            }
            if(totalAsistencias > 80 && evaluacion.dame_retardos() < 4){
                cout << "El alumno tiene derecho a ordinario" << endl;
            }
    return 0;
}
