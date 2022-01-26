/* Escriba un programa que calcule un valor de 1+2+3+....+n
*/
#include<iostream>

using namespace std;

int main() {
	int n, suma = 0;
	
	cout << "Digite el numero de elementos: "; cin >> n;

	for (int i = 1; i <= n; i++) {//hasta que llegue hacer n
		suma += i;//1+2+3...n

	}
	cout << "\n la suma es : " << suma << endl;

	return 0;
}