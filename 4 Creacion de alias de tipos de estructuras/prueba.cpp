typedef struct Estudiante Estudiante;

#include <iostream>
#include <string>

using namespace std;

// Definición de la estructura Estudiante
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

// Crear un alias usando typedef
typedef Estudiante Alumno;

int main() {
    // Utilizar el alias Alumno en lugar de Estudiante
    Alumno estudiante1;

    // Acceder y asignar valores a la estructura usando el alias
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 8.5;

    // Mostrar la información del estudiante
    cout << "Nombre: " << estudiante1.nombre << endl;
    cout << "Edad: " << estudiante1.edad << endl;
    cout << "Promedio: " << estudiante1.promedio << endl;

    return 0;
}
