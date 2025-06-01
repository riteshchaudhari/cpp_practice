#include<iostream.h>
#include<conio.h>
class Node
{
	int data;
	Node * next;
public:
	Node(int data)
	{
		cout<<"Node(int)"<<endl;
		this->data=data;
		next=NULL;
	}


	void setData(int data)
	{
		this->data=data;
	}


	int getData()
	{
		return data;
	}


	void setNext(Node *next)
	{
		this->next=next;
	}


	Node * getNext()
	{
		return next;
	}


	~Node()
	{
		cout<<"~Node()"<<endl;
		delete next;
	}
};




class LinkedList
{
	Node *head;
public:
	LinkedList()
	{
		cout<<"LinkedList()"<<endl;
		head=NULL;
	}


	bool insertData(int);
	bool insertByPos(int,int);
	bool deleteByPos(int);
	bool deleteByVal(int);
	void display();
	void displayRev(Node *);
	Node *getHead();

	~LinkedList()
	{
		cout<<"~LinkedList()"<<endl;
		
		Node *del;
		while(head)
		{
			del=head;
			head=head->getNext();
			delete del;
		}
    }
};





