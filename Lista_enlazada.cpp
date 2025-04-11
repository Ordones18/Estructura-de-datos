// Lista enlazada en C++ para gestionar tareas pendientes
// Luis Ordoñez
#include <iostream>
#include <string>
using namespace std;
//Estructura del nodo que representara cada tarea en la lista
struct Nodo {
    string tarea;
    Nodo* siguiente;
};
//Funcion para mostrar todas las tareas de la lista enlazada
void mostrarLista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    //Recorremos la lista hasta llegar al final 
    while (actual != nullptr) { 
        cout << "- " << actual->tarea << endl;
        actual = actual->siguiente;
    }
}
int main() {
    //Creamos tres nodos con tareas diferentes
    Nodo* tarea1 = new Nodo{"Hacer Compras", nullptr};
    Nodo* tarea2 = new Nodo{"Estudiar para el examen", nullptr};
    Nodo* tarea3 = new Nodo{"Visitar al medico", nullptr};
    //Enlazamos los nodos para formar la lista:
    //tarea1 -> tarea2 -> tarea3
    tarea1->siguiente = tarea2;
    tarea2->siguiente = tarea3;
    //Mostramos la lista completa de tareas pendientes
    cout << "Lista de tareas pendientes:" << endl;
    mostrarLista(tarea1);
    //Liberamos la memoria reservada dinamicamente
    delete tarea1;
    delete tarea2;
    delete tarea3;
    return 0;
}