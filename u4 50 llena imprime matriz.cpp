//matriz
#include <iostream> //#include<stdio.h>
#include<time.h>//random
using namespace std;
main( )
{
	int matriz[5][5];//declara una matriz de 5 por 5
	int i,j;
	srand(time(0)); // Inicializar la semilla de numeros aleatorios
	for(i=0;i<5;i++){//Ciclo para renglones
		for(j=0;j<5;j++){//Ciclo para columnas
			cout<<"Dame el valor del renglón "<<i<<" columna "<<j;
			cin>>matriz[i][j];
			//matriz[i][j]=rand()%100; // Genera numero aleatorio entre 0 y 99
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%3d",matriz[i][j]);
			//cout<<matriz[i][j]<<" ";
		cout<<"\n";
	}
}