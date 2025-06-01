#include<iostream.h>
#include<conio.h>

void swap(int *,int *);
void swapref(int &,int &);

void main()
{
	int a=10,b=20;

	cout<<"Values Before Swapping"<<endl;
	cout<<"a.: "<<a<<"   b.: "<<b<<endl;

	swap(&a,&b);

	cout<<"Values After Swapping (Using Pointer)"<<endl;
	cout<<"a.: "<<a<<"   b.: "<<b<<endl;

	swapref(a,b);

	cout<<"Values After Double Swapping (Using Reference)"<<endl;
	cout<<"a.: "<<a<<"   b.: "<<b<<endl;


getch();
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void swapref(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}