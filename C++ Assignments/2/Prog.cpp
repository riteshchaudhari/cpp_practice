#include<iostream.h>
#include<conio.h>

class DisplayOverload
{
	int a,b;
	char x,y;

public:
	DisplayOverload()
	{
		a=b=0;
		x=y=0;
	}

	void display(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout<<"a.: "<<a<<" b.: "<<b<<endl;
	}


	void display(char x,char y)
	{
		this->x=x;
		this->y=y;
		cout<<"x.: "<<x<<" y.: "<<y<<endl;
	}
};


void main()
{
	DisplayOverload d;
	char x,y;
	int a,b;

	cout<<"Enter Two Characters.: ";
	cin>>x>>y;

	cout<<"Enter Two Numbers.: ";
	cin>>a>>b;

	d.display(x,y);
	d.display(a,b);

getch();
}