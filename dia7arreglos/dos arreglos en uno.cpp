/*
Ejercicio 7: Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos
vectores en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del 
segundo vector.Muestre el contenido del nuevo vector en la salida estándar.


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	char letras1[] = { 'a','b','c','d','e' }, letras2[] = { 'f','g','h','i','j' };
	char letras3[10];//necesito 10 cada uno de los otros tiene 5
	//voy a copiar los elementos de letras 1 a letra 3
	for (int i = 0; i < 5; i++) {//letras1 solo tiene 5 elementos
		letras3[i] = letras1[i];
		}
	//voy a copiar los elementos de letras2 a letra 3
	for (int i = 5; i < 10; i++) {//las siguientes posiciones despues de la 5
		letras3[i] = letras2[i-5];//se los restas para que coincidad con los que existen
		}

	//mostrar nuevo vector
	for (int i = 0; i < 10; i++) {//las siguientes posiciones despues de la 5
		cout << letras3[i] << endl;
	}
	int getch();
	return 0;
}*/
