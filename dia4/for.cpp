/* la sentencia for
* for(expr1; expresion logica; expr2){
* conjunto de instrucciones;;
* }
*/
#include<iostream>// libreria standar de c++
#include<conio.h>

using namespace std;

int main() {
	int i;// for si puedes inicialixar el i adentro
	for (i = 1; i <= 10; i++) {
		cout << i << endl;
	}
	cout << "******\t*******" << endl;
	int j;// for si puedes inicialixar el i adentro
	for (j = 10; j >= 1; j--) {
		cout << j << endl;
	}
	int getch();//creo que ya no es tan necesario
	return 0;
}