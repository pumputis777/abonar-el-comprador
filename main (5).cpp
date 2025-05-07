/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float precio; // Declaro la primera variable de tipo float
    float total; // Declaro la segunda variable de tipo float
    int cantidad; // Declaro la tercera variable de tipo entero

    cout << "Ingrese el precio del artículo: "; // Solicita al usuario que ingrese el precio
    cin >> precio; // guarda el valor dado por el usuario en la variable precio
    cout << "Ingrese la cantidad que desea comprar: "; // Solicita al usuario que ingrese la cantidad
    cin >> cantidad; // guarda el valor dado por el usuario en la variable cantidad

    // Calcula el total a abonar
    total = precio * cantidad;

    // Muetra el resultado que es cuanto tiene que abonar
    cout << "El total a abonar es: $" << total << endl;


    return 0;
}
