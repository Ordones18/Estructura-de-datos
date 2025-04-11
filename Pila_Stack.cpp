//Elaboracion Luis Ordoñez
//Ejemplo de uso de pilas en C++
#include <iostream>
#include <stack>
using namespace std;
//Definicion de la funcion principal
int main() {
    //Simulamos que el usuario visita tres páginas web
    stack<string> historial;
    //Primera página visitada
    historial.push("UNACH");
    //Luego visita su perfil
    historial.push("SICOA");
    //Finalmente entra a configuracion
    historial.push("YOUTUBE");
    // Mostramos la ultima página visitada
    cout << "Ultima pagina visitada: " << historial.top() << endl;
    //Simulamos que el usuario presiona el boton atras
    historial.pop();  // Regresar una pagina se elimina la página actual
    //Mostramos la nueva pagina actual despues de regresar
    cout << "Ahora estas en: " << historial.top() << endl;
    return 0;
}
