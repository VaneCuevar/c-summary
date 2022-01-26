/* calcule y muestre la suma de los duadrados de los primeros enteros mayores que cero


#include<iostream>//libreria estandar de c++
#include<stdlib.h>
using namespace std;

int main() {
	int suma = 0, cuadrado;
	for (int i = 1; i <= 10; i++) {
		cuadrado = i * i;// los cuadrados de cada vez que avance el for
		suma += cuadrado; //suma = suma + sudrado
	}
	//1+4+9+16+25+36+49+64+81+100=385
	cout << "resultado de la suma es: " << suma << endl;
	return 0;
}*/