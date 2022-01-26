/*de los numeros del 1 al 10 mostrar su tabla de multiplicar


#include<iostream>//librria estandar de c++
#include<stdlib.h>
using namespace std;

int main() {
	int num;
	do {
		cout << "Digite un numero: "; cin >> num;//minimo se va ejecutar una vez
	} while ((num < 1) || (num > 10));//menor a uno o mayor a diez va a volver a solicitar el numero porque no esta en el rango
	
	for (int i = 1; i <= 20; i++) { //te va dar la table del numero del 1 al 20 por los rangos en el for
		cout << num << " * " << i << " = " << num * i << endl;
	}

	cout << "\n\n";
	system("pause");//para evitar que el ejecutable se cierre
	return 0;
}*/