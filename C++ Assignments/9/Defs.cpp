#include"Header.h"


bool LinkedList::insertData(int data)
{
	Node * newNode=new Node(data);
	
	//If newNode having NULL value or nothing
	if(newNode==NULL)
	{
		return false;
	}


	//If Linked List Is Empty
	if(head==NULL)
	{
		head=newNode;
		return true;
	}


	//If Linked List is not empty and having some of elements
	Node *temp=head;

	//Search LL till last element
	while(temp->getNext()!=NULL)
	{
		temp=temp->getNext();
	}

	//Insert at the end of LL
	temp->setNext(newNode);

	return true;
}



bool LinkedList::insertByPos(int data,int position)
{
	//If postion is -ve or 0
	if(position<=0)
	{
		return false;
	}

	
	//Create New Node
	Node *newNode=new Node(data);
	
	
	//If newNode is NULL
	if(newNode==NULL)
	{
		return false;
	}


	//If we want to insert newNode at fisrt
	if(position==1)
	{
		newNode->setNext(head);
		head=newNode;
		return true;
	}


	//If we want to insert newNode anywhere
	Node *prev=head;

	for(int i=1;i<(position-1);i++)
	{
		prev=prev->getNext();
		if(prev==NULL)
		{
			return false;
		}
	}

	newNode->setNext(prev->getNext());
	prev->setNext(newNode);

	return true;
}



bool LinkedList::deleteByPos(int position)
{
	//If LL Is Empty
	if(head==NULL)
	{
		return false;
	}

	//If Current Position is 1
	if(position==1)
	{
		Node *del=head;
		head=head->getNext();
		delete del;
		return true;
	}

	
	Node *prev=head;
	//If it is not 1st node
	for(int i=1;i<(position-1);i++)
	{
		prev=prev->getNext();
		if(prev==NULL)
		{
			return false;
		}
	}

	Node *del=prev->getNext();
	prev->setNext(del->getNext());
	delete del;

	return true;
}



bool LinkedList::deleteByVal(int data)
{
	//If LL is empty
	if(head==NULL)
	{
		return false;
	}

	
	//If deletable node is head
	if(head->getData()==data)
	{
		Node *del=head;
		head=head->getNext();
		delete del;
		return true;
	}

	
	//If deletable node is not head
	Node *prev=head;
	Node *del=head;
	while(del->getData()!=data)
	{
		prev=del;
		del=del->getNext();
		if(del==NULL)
		{
			return false;
		}
	}
	

	prev->setNext(del->getNext());
	delete del;
	return true;
}


Node *LinkedList::getHead()
{
	return head;
}


void LinkedList::display()
{
	Node *temp=head;
	
	//Traverse LL till last node
	while(temp!=NULL)
	{
		cout<<temp->getData()<<endl;
		temp=temp->getNext();
	}
}

void LinkedList::displayRev(Node *head)
{
	if(head!=NULL)
	{
		displayRev(head->getNext());
		cout<<head->getData()<<endl;
	}
}