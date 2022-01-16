/* cambiar un numero entero a romano
* M=1000
* D=500
* C=100
* L=50
* X=10
* V=5
* I=1

#include<iostream>
using namespace std;

int main() {
	int num, unidades, decenas, centenas, millar ;
	cout << "Digite un numero: "; cin >> num;
	//se necesita dividir numero 2152- se divida en 2000, en 100, en 50 y en 2

	unidades = num % 10; num /= 10; //numero 2152
	//unideades=2, numero ahora vale 215
	decenas= num % 10; num /= 10; //decenas=5, num=21
	centenas= num % 10; num /= 10;//centenas=1 , num=2 
	millar = num % 10; num /= 10;//millar=2, num=0

	switch (millar) {// hay tres casos para los millares mil, dos mil, tres mil
		case 1: cout << "M"; break;
		case 2:cout << "MM"; break;
		case 3:cout << "MMM"; break;
	}
	switch (centenas) {// SOLO PUEDE REPETIRSE TRES VECES UNA LETRA
	case 1: cout << "C"; break;
	case 2:cout << "CC"; break;
	case 3:cout << "CCC"; break;
	case 4:cout << "CD"; break;
	case 5:cout << "D"; break;
	case 6:cout << "DC"; break;
	case 7:cout << "DCC"; break;
	case 8:cout << "DCCC"; break;
	case 9:cout << "CM"; break;


	}
	switch (decenas) {// HAY NUEVE UNIDADES EN CADA UNA
	case 1: cout << "X"; break;
	case 2:cout << "XX"; break;
	case 3:cout << "XXX"; break;
	case 4:cout << "XL"; break;
	case 5:cout << "L"; break;
	case 6:cout << "LX"; break;
	case 7:cout << "LXX"; break;
	case 8:cout << "LXXX"; break;
	case 9:cout << "XC"; break;


	}
	switch (unidades) {// SI PONES EL NUMERO MAS CHICO ANTES SE RESTA
	case 1: cout << "I"; break;
	case 2:cout << "II"; break;
	case 3:cout << "I"; break;
	case 4:cout << "IV"; break;
	case 5:cout << "V"; break;
	case 6:cout << "VI"; break;
	case 7:cout << "VII"; break;
	case 8:cout << "VIII"; break;
	case 9:cout << "IX"; break;


	}

		return 0;
}*/