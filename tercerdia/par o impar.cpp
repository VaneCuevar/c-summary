/*
lea un valor entero y checar si es par o impar
*/


#include<iostream>

using namespace std;

int main() {
	int num;

	cout << "Digite un numero entero ";
	cin >> num;
	if (num == 0) {
		cout << "el numero es 0";
	}

	else if (num % 2 == 0) {
		cout << "El numero es par";
	}
	else {
		cout << "El numero es impar";
	}
	return 0;
}