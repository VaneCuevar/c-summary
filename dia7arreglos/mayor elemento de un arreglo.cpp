/*Ejercicio 5: Desarrolle un 
programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.
#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[100];//se deja un numeero grande porque no sabemos cuantos nos va a dictar
	int n, mayor=0;

	cout << "Digite el numero de elemntos del arreglo "; cin >> n;

	for (int i = 0; i < n; i++) {//n numero de elementos del vector
		cout <<i+1<< ". Digite un numero: "; cin >> numeros[i];//guardando todos los elementos del vector
		
		if (numeros[i] > mayor) {
			mayor = numeros[i];//1, 2, 4, 10, ya no sigue
		}//1, 2, 10, 5 


	}// es para que salga 1. Digite un numero para saber cuantos digito
	cout << "\nEl mayor elemento es " << mayor;
	int getch();
	return 0;
}*/