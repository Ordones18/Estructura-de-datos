//Ejemplo de uso de arreglos en C++ 
//Elaboracion Luis Ordoñez
#include <iostream>
using namespace std;
//Definicion de la funcion principal
int main() {
    //Declaracion de un arreglo de 5 elementos
    float calificaciones[5];
    //Declaracion de un arreglo de 5 elementos y asignacion de valores
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
    //Impresion de los valores del arreglo
    cout << "Calificaciones ingresadas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nota " << i + 1 << ": " << calificaciones[i] << endl;
    }
    return 0;
}
