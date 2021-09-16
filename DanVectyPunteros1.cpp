//============================================================================
// Name        : DanVectyPunteros1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*int *puntero= new int;
	*puntero=10;
	
	cout << "Soy puntero y el valor de la memoria a la que apunto es: " << puntero[0] << endl;
	*/
	int *puntero= new int [5];
	int *puntero3= puntero + 3;
	
	*puntero3= 25; 
	
	for (int i=0;i<5;i++){
		cout << *(puntero + i) << endl;
	}
	
	return 0;
}
