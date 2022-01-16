/*Escriba la edad un entero e indique esta en el rango de
* 18-25

#include<iostream>

using namespace std;

int main() {
	int edad;

	cout << "Digite su edad: "; cin >> edad;
	//18,19,20,21,25
	//&& y logico
	if ((edad >= 18) && (edad <= 25)) {//se deben cumplir las dos partes
		cout << "Su edad esta en el rango de 18-25";
	}
	else {
		cout << "Su edad esta fuera del rango";
	}

	return 0;
}*/