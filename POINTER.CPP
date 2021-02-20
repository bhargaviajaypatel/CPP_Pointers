#include<iostream.h>
#include<conio.h>
void timepass(int a)
{
	cout<<"Value is : "<<a<<endl;
}

void main()
{
	clrscr();

	int x;
	x=20;
	void(*tp)(int);
	tp=timepass;
	(*tp)(20);

	getch();
}