/*
Ejercicio 3: Escribe un programa que lea de la entrada estándar un vector de números y muestre en la salida estándar los números del vector con sus índices asociados.

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[100];//se deja un numeero grande porque no sabemos cuantos nos va a dictar
	int n;

	cout << "Digite el numero de elemntos del arreglo "; cin >> n;

	for (int i = 0; i < n; i++) {//n numero de elementos del vector
		cout << "Digite un numero: "; cin >> numeros[i];//guardando todos los elementos del vector
	}
	//ahpra vamos a mostrar los elementos con sus inidices asociados
	for (int i = 0; i < n; i++) {//n numero de elementos del vector
		
		cout <<i<<"->" << numeros[i] << endl;
	}
	int getch();
	return 0;
}*/