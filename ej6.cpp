/*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las
cuatros semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación
promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%. */
#include <iostream>
using namespace std;

int main (){
	float primer_semana, segunda_semana, tercera_semana,cuarta_semana, promedio_semana, porcentaje_recaudacion1, porcentaje_recaudacion2, porcentaje_recaudacion3, porcentaje_recaudacion4, total;
	cout << "Ingresar la recaudacion en pesos de la primer semana del mes: ";
	cin >> primer_semana;
	cout << "Ingresar la recaudacion en pesos de la segunda semana del mes: ";
	cin >> segunda_semana;
	cout << "Ingresar la recaudacion en pesos de la tercer semana del mes: ";
	cin >> tercera_semana;
	cout << "Ingresar la recaudacion en pesos de la cuarta semana del mes: ";
	cin >> cuarta_semana;
	total = primer_semana + segunda_semana + tercera_semana + cuarta_semana;
	promedio_semana = total / 4;
	cout << "La recaudacion promedio es: ";
	cout << promedio_semana << endl;
	porcentaje_recaudacion1 = (primer_semana / total)*100;
	porcentaje_recaudacion2 = (segunda_semana / total)*100;
	porcentaje_recaudacion3 = (tercera_semana / total)*100;
	porcentaje_recaudacion4 = (cuarta_semana / total)*100;




	cout << "El porcentaje por semana es: " << porcentaje_recaudacion1 << "%, " << porcentaje_recaudacion2 << "%, " << porcentaje_recaudacion3 << "%, " << porcentaje_recaudacion4 << "%, " ;

    return 0;
}
