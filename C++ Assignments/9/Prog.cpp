#include"Header.h"


void main()
{
	LinkedList l;
	l.insertData(10);
	l.insertData(20);
	l.insertData(30);
	l.insertData(40);
	l.display();

	l.insertByPos(80,1);
	l.insertByPos(77,1);
	l.display();

	l.insertByPos(66,5);
	l.display();


	l.insertByPos(25,3);
	l.display();


	cout<<"-----------------------"<<endl;
	l.deleteByPos(1);
	l.display();

	cout<<"-----------------------"<<endl;
	l.deleteByPos(5);
	l.display();
	
	cout<<"-----------------------"<<endl;
	l.deleteByVal(30);
	l.display();

	cout<<"-----------------------"<<endl;
	l.deleteByVal(40);
	l.display();
	
	cout<<"-----------------------"<<endl;
	l.deleteByVal(20);
	l.display();


    cout<<"---------------------------"<<endl;
    l.displayRev(l.getHead ());

	
getch();
}