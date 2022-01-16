/*la sentencia switch
* 
* switch (expresion){
* case literal 1:
*	conjunto de instrucciones 1;
*	break;
* 
* case literal 2:
*	conjunto de instrucciones 2;
*	break;
* 
* case literal n:
*	conjunto de instrucciones n;
*	break;
* 
* default:
*	conjunto de instrucciones por defecto;
*	break;
* }


#include<iostream>

using namespace std;

int main() {
	int num;

	cout << "digite u numero entre 1 y 5: "; cin >> num;
	//se evaluan cada caso que tenemos y se hacen las instrucciones de ese caso
	switch (num) {//le pasas la sentencia a comprobar
		case 1: cout << "Es el numero 1";
		break;//si quitas los breaks se sigue con los siguientes casos
		case 2: cout << "Es el numero 2";
		break;
		case 3: cout << "Es el numero 3"; break;
		case 4: cout << "Es el numero 4"; break;
		case 5: cout << "Es el numero 5"; break;

	default:
		cout<<"No esta en el rango";
		break;
		
	}

	return 0;
}*/