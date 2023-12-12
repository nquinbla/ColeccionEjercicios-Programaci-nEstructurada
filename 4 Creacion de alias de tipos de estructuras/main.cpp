// Usa typedef para crear un alias para la estructura Estudiante.

#include <iostream>
#include <string.h>

using namespace std;

typedef struct Estudiante Estudiante;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    Estudiante estudiante2;
    strcpy(estudiante2.nombre, "Maria");
    estudiante2.edad = 22;
    estudiante2.promedio = 9.1;

    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    cout << "Nombre: " << estudiante1.nombre << endl;
    cout << "Edad: " << estudiante1.edad << endl;
    cout << "Promedio: " << estudiante1.promedio << endl;

    cout << "Nombre: " << estudiante2.nombre << endl;
    cout << "Edad: " << estudiante2.edad << endl;
    cout << "Promedio: " << estudiante2.promedio << endl;

    cout << "Nombre: " << estudiante3.nombre << endl;
    cout << "Edad: " << estudiante3.edad << endl;
    cout << "Promedio: " << estudiante3.promedio << endl;

    return 0;
}


