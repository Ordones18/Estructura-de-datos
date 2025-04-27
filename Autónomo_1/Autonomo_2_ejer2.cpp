//Nombres: Ordoñez Yaguana Luis Gonzalo
//Fecha: 27 abril del 2025
//Actividad 2: Creando Registros y Arreglos de Estructuras

#include <iostream> // Librería para entrada y salida de datos
using namespace std;
// Definimos la estructura Estudiante
struct Estudiante {
    char nombre[50];   // Guardar el nombre máximo 50 caracteres
    int edad;          // Guardar la edad
    float promedio;    // Guardar el promedio
};
int main() {
    Estudiante estudiantes[5]; // Declaramos un arreglo para guardar 5 estudiantes
    // Ciclo para pedir los datos de cada estudiante
    for (int i = 0; i < 5; i++) {
        cout << "--->Estudiante " << "[" <<i + 1 << "]<---"<< endl;
        // Pedimos el nombre del estudiante
        cout << " Nombre: ";
        cin.ignore(); // Limpiamos el buffer
        cin.getline(estudiantes[i].nombre, 50); // Leemos la linea completa hasta 50 caracteres
        // Pedimos la edad
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        // Pedimos el promedio
        cout << "Promedio de [0] a [10]: ";
        cin >> estudiantes[i].promedio;

    }
    // Ordenamos los estudiantes por su promedio de mayor a menor
    // Usamos el motodo de burbuja bubble sort
    for (int i = 0; i < 5 - 1; i++) { // Recorrer todos los elementos menos el último
        for (int j = 0; j < 5 - i - 1; j++) { // Recorrer hasta el elemento no ordenado
            if (estudiantes[j].promedio < estudiantes[j + 1].promedio) {
                // Si el promedio del estudiante actual es menor que el del siguiente, los intercambiamos
                Estudiante temp = estudiantes[j];       // Guardamos el estudiante actual en una variable temporal
                estudiantes[j] = estudiantes[j + 1];    // El estudiante siguiente pasa al lugar actual
                estudiantes[j + 1] = temp;              // El estudiante guardado pasa al lugar siguiente
            }
        }
    }
    // Mostramos los estudiantes ya ordenados
    cout << "Estudiantes ordenados de mayor a menor:\n\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << endl;
    }
    return 0;
}
