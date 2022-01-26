/* hasta que se introduzca un valor entre 20-30 o el vaor 0 debe entregar los 
*la suma de los valores mayores a 0 introducidos


#include<iostream>

using namespace std;

int main() {
	int num, suma = 0;
	do {
		cout << "Digite un numero: "; cin >> num;
		if (num > 0) {
			suma += num;
		}

	} while (((num < 20) || (num > 30)) && (num != 0));//num menor a 20 o mayor a 30

	cout << "\n La suma es de: " << suma << endl;

	return 0;
}*/