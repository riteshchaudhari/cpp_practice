#include<iostream.h>
#include<conio.h>


class Complex
{
	int real;
	int imag;

public:

	Complex()
	{
		cout<<"Complex()"<<endl;
		real=imag=0;
	}

	Complex(int real,int imag)
	{
		cout<<"Complex(int,int)"<<endl;
		this->real=real;
		this->imag=imag;
	}

	void setData(int real,int imag)
	{
		this->real=real;
		this->imag=imag;
	}


	Complex operator+(Complex &c)
	{
		return Complex((this->real+c.real),(this->imag+c.imag));
	}


	Complex operator-(Complex &c)
	{
		return Complex((this->real-c.real),(this->imag-c.imag));
	}

	
	Complex & operator-()
	{
		this->real=-this->real;
		this->imag=-this->imag;
		return *this;
	}


	Complex & operator++()
	{
		this->real++;
		this->imag++;
		return *this;
	}


	Complex & operator+=(int a)
	{
		this->real=this->real+a;
		this->imag=this->imag+a;
		return *this;
	}


	Complex operator++(int a)
	{
		Complex temp(*this);
		this->real++;
		this->imag++;
		return temp;
	}


	int getReal()
	{
		return real;
	}


	int getImag()
	{
		return imag;
	}


	Complex operator=(Complex &c)
	{
		this->real=c.real;
		this->imag=c.imag;
		return *this;
	}


	friend ostream &operator<<(ostream &,Complex &);

	friend istream &operator>>(istream &,Complex &);


	void display()
	{
		cout<<"Number.: "<<real<<(imag>=0?"+":"")<<imag<<"i"<<endl;
	}
};


Complex operator+(int,Complex &);


ostream &operator<<(ostream &out,Complex &c)
{
	out<<"Number.: "<<c.real<<(c.imag>=0?"+":"")<<c.imag<<"i"<<endl;
	return out;
}


istream &operator>>(istream &in,Complex &c)
{
	in>>c.real>>c.imag;
	return in;
}



Complex operator+( int val,Complex & c ) {
    return Complex( val+c.getReal(), val+c.getImag() );
}



void line()
{
	cout<<"----------------"<<endl<<endl;
}


void main()
{
	Complex c1(2,-5),c2(10,20),c3,c4;
	line();
	c1.display();

	line();

	c2.display();

	line();

	c3=c1+c2;
	c3.display();

	line();

	c3=c1-c2;
	c3.display();

	line();

	c2=-c1;
	c2.display();
	
	line();

	c4=c1++;
	c4.display();

	line();

	c4+=10;
	c4.display();

	line();

	cout<<c1<<c2;

	line();

	cout<<"Enter Two Complex Numbers"<<endl;
	cin>>c1>>c2;
	
	cout<<c1<<c2;

	line();

	c1=5+c2;c1.display();

getch();
}