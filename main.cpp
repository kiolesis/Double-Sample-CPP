#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

main()
{
	srand(time(0));
	cout<<"podaj liczbe";
	int a,s=0,i=1,max=0;
	cin>>a;
	int tab[a];
	for(int i=0;i<a;i++)tab[i]=(double)(rand()/1001);
	for(int i=0;i<a;i++)cout<<tab[i]<<"   ";
	for(int i=0;i<a;i++)
	{
		s=s+tab[i];
	}
	cout<<endl<<"Suma = "<<s;
	for(int i=0;i<a;i++)
	{
		i=i*tab[i];
	}
	cout<<endl<<"iloczyn = "<<i;
	for(int i=0;i<a;i++)
	{
		if(max<tab[i])max=tab[i];
	}
	cout<<endl<<"Max = "<<max;
}
