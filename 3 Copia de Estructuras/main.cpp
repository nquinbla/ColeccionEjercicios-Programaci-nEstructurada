// Escribe una función que tome una estructura Estudiante y devuelva una copia de la misma.

#include <iostream>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    int curso;
};

Estudiante copiaEstudiante(Estudiante est) {
    Estudiante nuevoEst;
    nuevoEst.nombre = est.nombre;
    nuevoEst.edad = est.edad;
    nuevoEst.curso = est.curso;
    return nuevoEst;
}

int main() {
    Estudiante estudiante1;

    cout << "Introduce el nombre del estudiante: ";
    cin >> estudiante1.nombre;
    cout << "Introduce la edad del estudiante: ";
    cin >> estudiante1.edad;
    cout << "Introduce el curso del estudiante: ";
    cin >> estudiante1.curso;

    Estudiante estudiante2 = copiaEstudiante(estudiante1);

    cout << "Nombre: " << estudiante2.nombre << endl;
    cout << "Edad: " << estudiante2.edad << endl;
    cout << "Curso: " << estudiante2.curso << endl;

    return 0;
}