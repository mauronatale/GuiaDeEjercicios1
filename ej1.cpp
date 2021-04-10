/*Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor
que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.*/

#include <iostream>
using namespace std;

int main(){
    int cantidad_horas, valor_hora, sueldo;
    cout << "Ingresar cantidad de horas tranajadas: ";
    cin >> cantidad_horas;
    cout << "Ingresar el valor por hora trabajada: ";
    cin >> valor_hora;
    sueldo = cantidad_horas * valor_hora;
    cout << "El sueldo que le corresponde es: ";
    cout << sueldo;
    return 0;
}
