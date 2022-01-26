/*
*
*Ejercicio 1: Escribe un programa que defina un vector de números y calcule la suma de sus elementos.


#include<iostream>

using namespace std;

int main() {
	//solo vamos a definir el vector con los numeros que quiero
	int numero[5] = { 1,2,3,4,5 };//un vector de 5 elementos, puedes o no definir la cantidad porque ya los estas poniendo
	int suma = 0;

	for (int i = 0; i < 5; i++) {//vectores inician desde 0
		suma += numero[i]; //va ir tomando el valor de cada numero
	}

	cout << "La suma de los elementos es " << suma << endl;
	return 0;

	//para imprimir en orden inverso
		for(int i=4;i>=0;i--){
		cout<<numeros[i]<<endl; //Imprimimos el arreglo en orden inverso
	}

}*/