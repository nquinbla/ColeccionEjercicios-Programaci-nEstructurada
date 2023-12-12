//a. Constitución de una estructura
//
//Defina una estructura Estudiante que contenga nombre (una cadena de caracteres), edad (un entero) y promedio (un flotante).
//b. Instanciación de estructuras
//
//Crea una instancia de la estructura Estudiante y asigna valores a sus miembros.
//c. Instanciación con el operador malloc
//
//Crea una instancia de la estructura Estudiante utilizando la función malloc.
//d. Punteros y estructuras
//
//Crea un puntero a una estructura Estudiante e inicialízalo.
//e. Organización de la programación
//
//Escribe una pequeña aplicación que cree una lista de estudiantes utilizando la estructura Estudiante. Deberías ser capaz de añadir, ver y eliminar estudiantes de la lista.


#include <iostream>
#include <vector>
#include <cstdlib>

// a. Definición de la estructura Estudiante
struct Estudiante {
    std::string nombre;
    int edad;
    float promedio;
};

int main() {
    // b. Instanciación de la estructura Estudiante
    Estudiante estudiante1;
    estudiante1.nombre = "Juan";
    estudiante1.edad = 20;
    estudiante1.promedio = 3.5;
    std::cout << "Estudiante 1 creado: " << estudiante1.nombre << ", " << estudiante1.edad << ", " << estudiante1.promedio << std::endl;

    // c. Instanciación con malloc
    Estudiante* estudiante2 = (Estudiante*) malloc(sizeof(Estudiante));
    estudiante2->nombre = "Pedro";
    estudiante2->edad = 22;
    estudiante2->promedio = 3.7;
    std::cout << "Estudiante 2 creado con malloc: " << estudiante2->nombre << ", " << estudiante2->edad << ", " << estudiante2->promedio << std::endl;

    // d. Puntero a la estructura Estudiante
    Estudiante* ptrEstudiante = &estudiante1;
    std::cout << "Puntero a Estudiante 1: " << ptrEstudiante->nombre << ", " << ptrEstudiante->edad << ", " << ptrEstudiante->promedio << std::endl;

    // e. Creación de una lista de estudiantes
    std::vector<Estudiante> estudiantes;

    // Añadir estudiantes a la lista
    estudiantes.push_back(estudiante1);
    estudiantes.push_back(*estudiante2);
    std::cout << "Estudiantes añadidos a la lista." << std::endl;

    // Ver estudiantes
    std::cout << "Lista de estudiantes:" << std::endl;
    for (const auto& estudiante : estudiantes) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << ", Promedio: " << estudiante.promedio << std::endl;
    }

    // Eliminar un estudiante
    estudiantes.pop_back();
    std::cout << "Último estudiante eliminado de la lista." << std::endl;

    // Liberar memoria
    free(estudiante2);
    std::cout << "Memoria liberada para el estudiante 2." << std::endl;

    return 0;
}
