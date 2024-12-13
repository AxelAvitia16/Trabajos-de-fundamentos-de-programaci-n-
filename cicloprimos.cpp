#include <iostream>
#include<cmath>
#include<windows.h>
using namespace std;
int nume;
bool esPrimo=true;
int main(){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	cout<<"ingresa un número entero:";
	cin>> nume;
	//condicional 1 para verificar no igual a1:
	if(nume<2){esPrimo=false;
	}
	else{
		for(short int i=2;i<=sqrt(nume);i++){
			if(nume%i==0){
				esPrimo=false;
				//break es usado para finalizar y salir del ciclo, otro uso es para finalizar case en switch
				break;
			}
		}
	}
	//impr
		if(esPrimo){
		cout<<nume<<" Es un número primo";
	}
 else {
    cout << nume<< " No es un número primo.";
}
}
