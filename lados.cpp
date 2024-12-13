#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float lado1, lado2, lado3;
	
	cout<<"Escribe el lado 1 del triángulo: ";
	cin>>lado1;
	cout<<"Escribe el lado 2 del triángulo: ";
	cin>>lado2;
	cout<<"Escribe el lado 3 del triángulo: ";
	cin>>lado3;
	
	if(lado1==lado2&&lado1==lado3){
		cout<<"Tu triángulo es un equilátero.";
	} else {
		if(lado1==lado2||lado1==lado3){
			cout<<"Tu triángulo es un isósceles.";
		} else {
			if(lado1!=lado2&&lado1!=lado3){
				cout<<"Tu triángulo es un escaleno.";
			}
		}
	}
	
	return 0;
}