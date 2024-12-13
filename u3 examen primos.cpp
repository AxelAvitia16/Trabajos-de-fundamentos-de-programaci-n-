#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    int n,x;
    char otro;
    n=3;
    do{
	    for(x=2;x<n;x++){
			if(n%x==0)
				break;
		}
		if(x==n){
			cout<<n<<" Sí es primo\n";
			cout<<"¿Genero el siguiente número primo <S/N?";
			cin>>otro;
		}
		n++;
	}while(otro=='S' or otro=='s');
	return 0;
}