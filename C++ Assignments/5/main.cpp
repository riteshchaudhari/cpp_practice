#include "header.h"

void main()
{
	CString s1("IACSD"),s2;


	s1.display();

	s2.acceptString();
	s2.display();

	CString s3=s2,s4;
	s3.display();

	/*******==operator***********/

	if((s2==s3)==0)
	{
		cout<<"\nStrings are equal"<<endl;
	}
	else
		cout<<"\nStrings are NOT equal"<<endl;


	s4=s1;
	
	//s4.display();

	cout<<s4<<s2;
	cin>>s1>>s3;
	cout<<s1<<s3;


	
	cout<<"\n********************** \n";
	cout<<s1;
		cout<<"\ns1[2]=";
	cout<<s1[2];

	cout<<"\n\n**********************";
     s1[2]='A';

	cout<<s1;

	cout<<"\n\n**********************\n";

	CString s5(5,'a');
	cout<<s5;

	cout<<"\n\n**********************\n\n";


	cout<<"\n\n**********************\n";

	CString s6[]={s1,s2,s3,s4,s5};

	for(int i=0;i<5;i++)
	cout<<s6[i]<<"  ";

	cout<<"\n\n**********************\n\n";


}