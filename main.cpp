#include <iostream>
#include "libreria.h"
using namespace std;


int main()
{
	float operatore1, operatore2, risultato;
	char operando;
	
	cout << "inserire operatore 1: ";
	cin >> operatore1;
	cout << "\ninserire operando: ";
	cin >> operando;
	
	switch(operando)	
	{
		case 'r':
		case 'R': 
			risultato = calcolatrice(operatore1, operando);
			break;
		
		default: 
			cout << "\ninserire operatore 2: ";
			cin >> operatore2;
			risultato = calcolatrice(operatore1, operando, operatore2);
	}
	
	cout << "\nil risultato e': " << risultato;
	
	cout << endl;
	system("pause");
	
	
	
}
