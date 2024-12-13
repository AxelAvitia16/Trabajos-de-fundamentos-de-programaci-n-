//#include<stdio.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int vector[10];
	int i;
	for(i=0;i<10;i++)
		vector[i]=i*2;
	for(i=0;i<10;i++)//se pasó el límite
		cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	vector[0]=100;
	vector[1]=200;
	vector[2]=300;
	cout<<vector[0]<<endl;
	cout<<vector[1]<<"\n";
	cout<<vector[2];
	for(i=0;i<10;i++)
	{
		cout<<"Dame el valor de vector["<<i<<"]: ";
		cin>>vector[i];
	}
	for(i=0;i<10;i++)//se pasó el límite
		cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	
	return 0;
}