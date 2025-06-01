#include<iostream.h>
template <class T>
class Stack
{
	int top;
	int size;
	T *arr;
public:
	Stack();
	Stack(int);
	bool isEmpty();
	bool isFull();
	bool push(T data);
	T peek();
	T pop();

};
template <class T>
Stack <T>::Stack()
{
	size=5;
	top=-1;
	arr=new T[size];
}
template <class T>
Stack<T>::Stack(int size)
{
	this->size=size;
	top=-1;
	arr=new T[size];
}
template <class T>
bool Stack<T>:: isEmpty()
{
	try
	{
		if(top==-1)
		{			
			throw "stack underflow" ;
		}
	}
	catch( char * a )
	{
		cout<<"Error : "<<a<<endl;
	}

	//normal cond

	if(top == -1)
	{
		return true;
	}
	else 
		return false;
}
template <class T>
bool Stack<T>:: isFull()
{
	try
	{
		if(top == (size-1))
		{			
			throw "stack overflow" ;
		}
	}
	catch( char * a )
	{
		cout<<"Error : "<<a<<endl;
	}

	if(top==size-1)
	{
		return true;
	}
	return false;
}
template <class T>
bool Stack<T>::push(T data)
{
	if(isFull())
	{
		return false;
	}	
	arr[++top]=data;
	return true;
}
template <class T>
T Stack<T>:: pop()
{
	if(isEmpty())
	{
		return -999;
	}
	return arr[top--];
}
template <class T>
T Stack<T>:: peek()
{
	if(isEmpty())
	{
		return -999;
	}
	return arr[top];
}
void main()
{
	Stack <int> s1;
	Stack <char> s2;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
	s1.push(60);
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;

//	cout<<s1.peek()<<endl;
//	cout<<s2.pop()<<endl;
//	cout<<s2.peek()<<endl;
/*	s1.push(10);
	cout<<(s1.push(10))<<endl;
	s1.push(10);
	cout<<(s1.push(10))<<endl;
	cout<<(s1.push(10))<<endl;
	cout<<(s1.push(10))<<endl;
	cout<<(s1.push(10))<<endl;
	
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;
	cout<<(s1.pop())<<endl;*/
}