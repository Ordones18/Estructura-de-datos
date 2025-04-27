//Nombres: Ordoñez Yaguana Luis Gonzalo
//Fecha: 27 abril del 2025
//Actividad 1: Resolviendo Problemas con Cadenas y Arreglos

// Incluimos bibliotecas necesarias
#include <iostream>  // Para entrada y salida de datos cout, cin
#include <cctype>    // Para funciones de caracteres como tolower
#include <cstring>   // Para funciones de cadenas como strlen
using namespace std;

// Función que cuenta todas las vocales (a, e, i, o, u) en una cadena de texto
int contarVocales(const char texto[]) {
    int cont = 0; // Variable para contar el número de vocales
    for(int i = 0; i < strlen(texto); i++) { // Recorremos cada caracter de la cadena
        char v = tolower(texto[i]); // Convertimos el carácter a minúscula para evitar problemas con mayúsculas
        if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u') { // Si es una vocal
            cont++; // Aumentamos el contador
        }
    }
    return cont; // Devolvemos el número total de vocales
}

// Función que cuenta cuántas veces aparece cada vocal individualmente
// Los resultados se devuelven a través de referencias a, e, i, o, u
void contarVocalesIndividuales(const char cadena[], int& a, int& e, int& i, int& o, int& u) {
    // Inicializamos todos los contadores de vocales a cero
    a = e = i = o = u = 0;
    for(int j = 0; j < strlen(cadena); j++) { // Recorremos cada carácter
        char letra = tolower(cadena[j]); // Convertimos a minúscula
        switch(letra) { // Usamos un switch para ver qué vocal es
            case 'a': a++; break; // Si es a aumentamos el contador
            case 'e': e++; break; // Si es e aumentamos el contador
            case 'i': i++; break; // Si es i aumentamos el contador
            case 'o': o++; break; // Si es o aumentamos el contador
            case 'u': u++; break; // Si es u aumentamos el contador
        }
    }
}

// Función principal del programa
int main() {
    const int MAX_SIZE = 101; // Definimos un tamaño máximo de 100 caracteres + 1 para el carácter nulo '\0'
    char cadena[MAX_SIZE];    // Arreglo para guardar la cadena ingresada por el usuario
    int count_a, count_e, count_i, count_o, count_u; // Variables para contar cada vocal

    // Pedimos al usuario que ingrese una cadena de texto
    cout << "-----> Ingrese una cadena de texto hasta 100 caracteres: ";
    cin.getline(cadena, MAX_SIZE); // Leemos toda la línea de texto

    // Mostramos la cadena al reves
    cout << "----> Cadena de texto al reves: ";
    for (int i = strlen(cadena) - 1; i >= 0; --i) { // Comenzamos desde el final y vamos hacia el principio
        cout << cadena[i]; // Imprimimos cada letra
    }
    cout << endl;

    // Contamos todas las vocales funcion que cuenta el total
    int totalVocales = contarVocales(cadena);
    
    // Contamos las vocales individuales función que cuenta una por una
    contarVocalesIndividuales(cadena, count_a, count_e, count_i, count_o, count_u);

    // Mostramos los resultados de las vocales individuales y el total
    cout << "--------------- Conteo de vocales -----------------" << endl;
    cout << "-----> a: " << count_a << " veces" << endl;
    cout << "-----> e: " << count_e << " veces" << endl;
    cout << "-----> i: " << count_i << " veces" << endl;
    cout << "-----> o: " << count_o << " veces" << endl;
    cout << "-----> u: " << count_u << " veces" << endl;
    cout << "Total de vocales: " << totalVocales << endl;

    return 0;
}
