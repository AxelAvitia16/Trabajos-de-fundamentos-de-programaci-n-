#include<windows.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,y;
	float z;
	//imprime numeros de 1 en 1 hasta el 100 mientras x<=100,
	//variaacion: incremento de 1 en 1 y 2 en 2
	for(x=0;x<=100;x+=1)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	system("PAUSE");
	return 0;
}
