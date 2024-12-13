#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
  int numero, primo, divisores;
   
    do{
        printf("Dame un numero para calcular si es primo o no: ");
        scanf("%d",&numero);
    }
	while(!(numero>=0)); 
    divisores = 0; 
    for(primo=2; primo<=numero/2; primo++) 
    if (numero%primo == 0) divisores++; 
    if (divisores >= 1) printf ("%d no es primo\n", numero);
    else printf ("%d es primo\n",numero);
    system("pause");
    return(0);
}