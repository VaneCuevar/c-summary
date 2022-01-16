/* Simule un cajero automatico con saldo inicial de 1000 dls

#include<iostream>

using namespace std;

int main() {
	int saldoinicial=1000, opc;
	float retiro, extra, saldo=0;// no sabemos cuannto mas va a ingresar/ igual inicias un saldo en 0
	//\t es un tabulador
	cout << "\tBienvenido a su cajero automatico virtual " << endl;
	cout << "1. Ingrsar dinero en cuenta" << endl;
	cout << "2. Retirar dinero de la cuenta" << endl;
	cout << "3. Salir" << endl;
	cout << "Digite su opcion: "; cin >> opc;//opc de opcion a ingresar
	//creamos un switch con tres opciones 
	switch (opc) {
		case 1:
			cout << "Digite la cantidad de dinero a ingresar: "; cin >> extra;
			saldo = saldoinicial + extra;
			cout << "Dinero en cuenta es de :" << saldo; break;//no olvides el break
		case 2:
			cout << "Digite la cantidad que va aretirar "; cin >> retiro;
			if (retiro > saldoinicial) {
				cout << "No tiene esa cantidad de dinero";
			}
			else {
				saldo = saldoinicial - retiro;
				cout << "Dinero en cuenta es de :" << saldo; break;//no olvides el break
			}
		case 3:break;
	}
	return 0;
}*/