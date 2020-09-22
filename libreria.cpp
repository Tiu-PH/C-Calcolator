#include <iostream>
#include <cmath>
using namespace std;

float calcolatrice(float operando1, char operatore, float operando2 = 0)
{
		float x; 
		bool opvalida = true;

	switch(operatore)	
	{
		case'+': 
			x = operando1 + operando2;	
			break;
		case '-': 
			x = operando1 - operando2;
			break;
		case '*':
			x = operando1 * operando2;
			break;
		case '/': 
			x = operando1 / operando2;
			break;
			
		case 'r':
		case 'R': 
			x = sqrt(operando1);
			break;		
			
		case 'p':
		case 'P': 
			x = pow(operando1, operando2);
			break;
		
		default: 
			opvalida = false;
	}
	
	if (opvalida == false)
	{
		cout<<"\noperatore non valido";
		return 0;
	}	
		
	return x;
}
	

