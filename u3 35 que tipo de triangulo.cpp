/*Programa que lea 3 datos de entrada A, B y C. 
Estos corresponden a las dimensiones de los lados de un
triángulo. 
El programa debe determinar qué tipo de triangulo es, 
teniendo en cuenta que:
	Si los 3 lados son iguales entonces es equilátero
	Si todos los lados son diferentes es escaleno
	Si dos lados del triángulo son iguales entonces es 
	isósceles*/
#include<windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int l1, l2, l3;
	cout<<"Dame el valor del lado 1: ";
	cin>>l1;	
	cout<<"Dame el valor del lado 2: ";
	cin>>l2;
	cout<<"Dame el valor del lado 3: ";
	cin>>l3;
	if(l1==l2 && l1==l3)
		cout<<"El triángulo es equilatero";
	else
		if(l1!=l2 && l1!=l3 && l2!=l3)
			cout<<"El triángulo es escaleno";
		else
			cout<<"El triangulo es isósceles";
	return 0;
}