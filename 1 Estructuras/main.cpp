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
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};


