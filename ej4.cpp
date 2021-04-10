/*Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la
cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y
el porcentaje de no ocupación del mismo.*/

#include <iostream>
using namespace std;

int main (){
	int cant_disponibles, cant_ocupados, cant_totales;
	float porc_ocupados, porc_no_ocupados;

	cout << "Ingresar la cantidad de asientos ocupados: ";
	cin >> cant_ocupados;
	cout << "Ingresar la cantidad de asientos disponibles: ";
	cin >> cant_disponibles;
    cant_totales = cant_disponibles + cant_ocupados;
    porc_ocupados = (float) cant_ocupados / cant_totales*100;
    porc_no_ocupados = cant_disponibles / (float) cant_totales*100;

    cout << "Ocupados: " << porc_ocupados << "%" << endl;
    cout << "Disponibles: " << porc_no_ocupados << "%" << endl;

	return 0;
}
