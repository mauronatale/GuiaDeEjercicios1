#include <iostream>
using namespace std;

int main (){
	char letra;
	int distancia;
	cout << "Ingresar una letra en mayuscula: ";
	cin >> letra;
	distancia = letra - 'A';
	cout << "La distancia con la letra A es: " << distancia << endl;
	return 0;
}
