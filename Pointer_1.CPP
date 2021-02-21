#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int A,B;
	int *ptrA,*ptrB;

	ptrA=&A;
	ptrB=&B;

	cout<<"Enter two numbers:";
	cin>>*ptrA>>*ptrB;

	cout<<"The two numbers are:"<<*ptrA<<" "<<*ptrB<<endl;

	getch();
}