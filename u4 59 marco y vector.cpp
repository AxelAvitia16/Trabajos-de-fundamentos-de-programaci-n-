#include <iostream> //programa que imprime un marco y en su interior un vector
#include<time.h>//random
#include <windows.h>
#include <conio.h>//para usar el getche();
using namespace std;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
	int r,vec[10];
	srand(time(0)); // Inicializar la semilla de numeros aleatorios
	printf("Maximice la pantalla y presione una tecla");
	getche();
	system("CLS");
	for(r=0;r<=78;r++)//165 ciclo para dibujar las líneas horizontales
	{
		gotoxy(r,0);//línea superior
		printf("*");
		gotoxy(r,18);//40 línea inferior
		printf("*");
	}
	for(r=0;r<18;r++)//40 ciclo para las líneas verticales
	{
		gotoxy(0,r);//línea izquierda
		printf("*");
		gotoxy(79,r);//165 línea derecha
		printf("*");
	}
	gotoxy(40,2);//72,17
	cout<<"Impresion del vector";
	for(r=0;r<10;r++)
	{
		vec[r]=rand()%100;
		gotoxy(40,r+3);//80,r+17
		printf("%d",vec[r]);
	}
	gotoxy(5,13);//40,13
	getche();
	return 0;
}