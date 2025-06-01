
#include<iostream.h>

class stack
{
	int size;
	int * arr;
	int top;
public:
	stack(int size=5);
	int ifempty();
	int iffull();
	bool push(int);
	int pop( );
	int peek();

};

stack::stack(int size)
	{
		if(size<=0)
		{
		size=5;
		}
	this->size=size;
	top=-1;
	arr=new int[size];
	}
stack::ifempty()
{
	return (top==-1);
}
stack::iffull()
{
	return top==(size-1);
}

bool stack::push(int data)
{
	if( iffull())
	
		return false;
	arr[++top]=data;
	return true;
}

int stack::pop()
{
	if(ifempty())
		return -99;
	return arr[top--];

}
		

int stack::peek()
{
	if(ifempty())
		return -99;
	return arr[top];
}

int main()
{
	stack a(-1);
	a.push(10);
	a.push(20);
	a.push(30);
	a.push(40);
	cout<<"---------------------"<<endl;
	cout<<a.pop()<<endl;
	cout<<a.pop()<<endl;
	cout<<a.pop()<<endl;
	cout<<a.pop()<<endl;
	return 0;
}

	