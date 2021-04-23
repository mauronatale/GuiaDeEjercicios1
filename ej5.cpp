/*Un comercio vende tres marcas de alfajores distintas A, B y C.
Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y
luego se informe el porcentaje de ventas para cada una de ellas.*/

#include <iostream>
using namespace std;

int main (){
	int a1, a2, a3;
	float porcentaje_a1, porcentaje_a2, porcentaje_a3, porcentaje_total;
	cout << "Ingresar la cantidad de alfajores vendidos: ";
	cin >> a1;
	cout << "Ingresar la cantidad de alfajores vendidos: ";
	cin >> a2;
	cout << "Ingresar la cantidad de alfajores vendidos: ";
	cin >> a3;
	porcentaje_total = a1 + a2 + a3;
	porcentaje_a1 = a1 / porcentaje_total * 100 ;
    porcentaje_a2 = a2 / porcentaje_total * 100 ;
    porcentaje_a3 = a3 / porcentaje_total * 100;
    cout << "A: " << porcentaje_a1 << "%" << endl;
    cout << "B: " << porcentaje_a2 << "%" << endl;
    cout << "C: " << porcentaje_a3 << "%" << endl;





	return 0;
}
