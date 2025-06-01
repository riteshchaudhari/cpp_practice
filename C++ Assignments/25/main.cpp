#include<iostream>
#include <fstream>
#include<string>
using namespace std;
#include <conio.h>

void main()
{
    char dest[10];
	string c;
	int i=0;    

	cout<<"Enter Destinition File Name.: ";
	cin>>dest;

	ifstream in("data.txt");
	
	ofstream out(dest);

	if (in.is_open())
	{
		while ( getline (in,c) )
		{
			if(c=="Rubbish")
			{
				cout<<c<<endl;
			}
			else
			{
				cout << c << '\n';
				out<<c<<endl;
			}
		}
	in.close();
	}

	cout<<c<<endl;

	out.close();

getch();
}
