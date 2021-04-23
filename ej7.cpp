/*Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento
aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar será de $ 800.*/

#include <iostream>
using namespace std;

int main (){
	float importe_venta, porcentaje_descuento, importe_pagar, descuento, total_pagar;
	cout << "Ingresar el importe de la venta: ";
	cin >> importe_venta;
	cout << "Ingresar el porcentaje de descuento: ";
	cin >> porcentaje_descuento;
	descuento = (importe_venta * porcentaje_descuento) / 100;
	total_pagar = importe_venta - descuento;
	cout << "El importe a pagar es: " << total_pagar << endl;


	return 0;
}
