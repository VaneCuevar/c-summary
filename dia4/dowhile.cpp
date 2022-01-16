/* do while
* do{
* conjunto de instruccioes;
* }while(expresion logica);
* 
* actura y luego pensara

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int i = 1;

	do {
		cout << i << endl;
		i++;//aumenta el iterador de 1en1
	} while (i <= 10);

	int j = 10;

	do {
		cout << i << endl;
		j--;//aumenta el iterador de 1en1
	} while (j >= 1);
	system("pause");//funciona con la libreria de stdli.h, y sirve para que no se cierre
	//de inmediato hustro ejecutable es como el getch
	return 0;
}*/