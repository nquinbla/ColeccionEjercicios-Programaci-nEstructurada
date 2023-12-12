// Define una unión que pueda almacenar un entero, un flotante o una cadena de caracteres. Crea una variable de esta unión y asigna diferentes tipos de valores para ver cómo se comporta.

#include <iostream>
#include <string>

using namespace std;

union miUnion {
    int entero;
    float flotante;
    string cadena;
};

int main() {
    miUnion miVariable;
    int opcion;

    cout << "Seleccione el tipo de dato que desea almacenar en la variable: " << endl;
    cout << "1. Entero" << endl;
    cout << "2. Flotante" << endl;
    cout << "3. Cadena de caracteres" << endl;
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese un entero: ";
            cin >> miVariable.entero;
            cout << "El valor almacenado es: " << miVariable.entero << endl;
            break;
        case 2:
            cout << "Ingrese un flotante: ";
            cin >> miVariable.flotante;
            cout << "El valor almacenado es: " << miVariable.flotante << endl;
            break;
        case 3:
            cout << "Ingrese una cadena de caracteres: ";
            cin >> miVariable.cadena;
            cout << "El valor almacenado es: " << miVariable.cadena << endl;
            break;
        default:
            cout << "Opción inválida" << endl;
    }
    return 0;
}