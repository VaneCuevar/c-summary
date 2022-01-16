/*
escriba un prpgrama que lea dos numeros y determine cual de ellos es el maror



#include<iostream>

using namespace std;

int main() {
	int n1, n2;

	cout << "Digite 2 numeros: ";
	cin >> n1 >> n2;// para no pedir uno por uno
	if (n1 == n2) {
		cout << "ambos numeros son iguales " << n1;
	}
	else if (n1 > n2) {// no poner dos if sino que else if() 
		cout << "El mayor es " << n1;
	}
	else {
		cout << "El mayor es " << n2;
	}
	
	return 0;
}*/