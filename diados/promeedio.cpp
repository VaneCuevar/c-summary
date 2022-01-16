//media de 3 notas
//calcule el valor que toma la siguiente función para unos valores ee x e y
#include<iostream>
#include<math.h>//libreria matematica de c++

using namespace std;

int main() {

	/*float practica, teorica, participacion, total = 0;

	cout << "digite la nota de practica: "; cin >> practica;
	cout << "digite la nota de teorica: "; cin >> teorica;
	cout << "digite la nota de participacion: "; cin >> participacion;

	practica*= 0.30;// practica = practica *0.30
	teorica *= 0.60;
	participacion *= 0.1;

	total = practica + teorica + participacion;

	cout << "/nla nota final es: " << total << endl;*/

	float x, y, rest=0;

	cout << "Didite el valor de x: "; cin >> x;
	cout << "Didite el valor de y: "; cin >> y;
	//sqrt saca raices cuadradas
	//pow elevar (numero que quieres elevar, el numero al que elevas)
	rest = (sqrt(x)) / (pow(y,2)-1);
	cout << "\nMi resultado es " << rest << endl;
	return 0;

}