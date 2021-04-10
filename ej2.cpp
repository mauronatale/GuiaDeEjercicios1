/*Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas. A
continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.*/

#include <iostream>
using namespace std;

int main (){
    int num1, num2, var_aux;
    cout << "Ingresar el primer numero: ";
    cin >> num1;
    cout << "Ingresar el segundo numero: ";
    cin >> num2;
    cout << "La variable 1 contiene: ";
    cout << num1 << endl;
    cout << "La variable 2 contiene: ";
    cout << num2 << endl;
    var_aux = num1;
    num1 = num2;
    num2 = var_aux;
    cout << endl;
    cout << "Intercambio de variables" << endl << endl;
    cout << "La variable 1 contiene: " ;
    cout << num1 << endl;
    cout << "La variable 2 contiene: ";
    cout << num2 << endl;

    return 0;
}
