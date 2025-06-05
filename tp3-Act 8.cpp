#include <iostream> // solicitar biblioteca
using namespace std;

int main() {
    double x, resultado; // variable del numero que se ingresa
    
    cout << "Ingrese un numero: "; // pide al usuario que ingrese un numero
    cin >> x;
    
    resultado = x; // variable de que el resultado da el numero ingresado
    
    for (int i = 1; i < 5; i++) { // el ciclo se repetira 5 veces
        resultado = resultado * x; // el numero se ve multiplicado por si mismo 5 veces
    }
    
    cout << x << " elevado a la quinta es igual a " << resultado << endl; // el resultado en pantalla
    
    return 0;
}