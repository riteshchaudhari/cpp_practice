#include<iostream.h>
template <class T>
class Queue
{
	int rear;
	int size;
	int front;
	T *arr;
public:
	Queue();
	Queue(int);
	bool isEmpty();
	bool isFull();
	bool insert(T data);
	T delete1();
	void getData();

};
template <class T>
Queue <T>::Queue()
{
	size=5;
	front=rear=-1;
	arr=new T[size];
}
template <class T>
Queue<T>::Queue(int size)
{
	this->size=size;
	front=rear=-1;
	arr=new T[size];
}
template <class T>
bool Queue<T>:: isEmpty()
{
	if((front==-1 && rear==-1) ||front>rear)
	{
		return true;
	}
	return false;
}
template <class T>
bool Queue<T>:: isFull()
{
	if(rear==size-1)
	{
		return true;
	}
	return false;
}
template <class T>
bool Queue<T>::insert(T data)
{
	
	if(isFull())
	{
		return false;
	}	
	
	if(rear==-1)
	{
		front=0;
	}
	rear++;
	cout<<"rear:"<<rear;
	arr[rear]=data;

	cout<<"\nElement:"<<arr[rear];
	return true;
}
template <class T>
T Queue<T>:: delete1()
{

	
	if(isEmpty())
	{
	cout<<"Empty";
	}
	
	
	cout<<"\nfront::"<<front<<endl;
	return arr[front++];
	

}
template <class T>
void Queue<T>:: getData()
{
	if(isEmpty())
	{
		return -999;
	}
	cout<<"\nArray::"<<arr;
}

void main()
{
	Queue <int> q1;
	Queue <char> q2;

	q1.insert(10);
	q1.insert(20);
	q1.insert(30);
   
	cout<<q1.delete1();
	cout<<q1.delete1();	
	cout<<q1.delete1();
	q2.insert('A');
	q2.insert('B');
	q2.insert('C');
   
	cout<<q2.delete1();
cout<<q2.delete1();
cout<<q2.delete1();
}