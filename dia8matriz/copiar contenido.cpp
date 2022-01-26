/*
Ejercicio 3: Hacer una matriz de tipo entera de 2 * 2, llenarla de números y luego copiar todo su contenido hacia otra matriz.
*/


#include<iostream>
#include<conio.h>//impedir cierre del ejecutable

using namespace std;

int main() {
	int num[2][2] = { {1,2},{3,4}};
	int matriz2[2][2];

	//pasando el contenido de num hacia matriz2
	for (int i = 0; i < 2; i++) {//el primero controla lo que son las filas
		for (int j = 0; j < 2; j++) {//controka columnas
			matriz2[i][j] = num[i][j];
		}
	}
	//mostrar matriz
	for (int i = 0; i <2; i++) {//el primero controla lo que son las filas
		for (int j = 0; j < 2; j++) {//controka columnas
			cout << matriz2[i][j];
		}
		cout << "\n";
	}

	int getch();
	return 0;
}