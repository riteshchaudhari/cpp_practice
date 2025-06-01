#include<iostream.h>
class Complex
{
	int real,imag;
public:
	Complex()
	{
		real=0;
		imag=0;		
	}

	Complex(int r,int i)
	{
		real=r;
		imag=i;		
	}
	void display()
	{
		cout<<this->real<<((this->imag)>0 ?"+" : " ")<<this->imag<<endl;
	}
};

template<class T>
void swap (T & a,T & b)
{

	T temp;
	temp=a;
	a=b;
	b=temp;
	
}
	
void main()
{
	int a=10,b=20;
	char a1='A',b1='B';
	Complex c1(5,3),c2(8,6);

	cout<<"Before swapping:"<<endl;
	cout<<"a= "<<a<<"  "<<"b= "<<b<<endl;
	swap(a,b);
	cout<<"After swapping: "<<endl;
	cout<<"a= "<<a<<"  "<<"b= "<<b<<endl;

	cout<<"Before swapping:"<<endl;
	cout<<"a= "<<a1<<"  "<<"b1= "<<b<<endl;
	swap(a1,b1);
	cout<<"After swapping: "<<endl;
	cout<<"a= "<<a1<<"  "<<"b1= "<<b<<endl;


	//swap(a1,b1);
	cout<<"Before swapping:"<<endl;
	c1.display();
	c2.display();
	swap(c1,c2);
		cout<<"After swapping: "<<endl;
	c1.display();
	c2.display();
}