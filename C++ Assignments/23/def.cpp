#include "header.h"
#include<string.h.>
#include <iomanip.h>
#include <iomanip>
void employee::getdata()
{
	
	cout<<"Enter the name of employee: "<<endl;
	cin>>empname;
	cout<<"Enter salary: "<<endl;
	cin>>sal;
	cout<<"Enter phone_no :"<<endl;
	cin>>pho_no;

}

void employee::display()
{	
	int a=strlen(empname);
	a=10-a;
	for(int i=1;i<=a;i++)
		strcat(empname,"*");

	cout<<endl;
	cout<<setw(10)<<setiosflags(ios::left)<<empname<<resetiosflags(ios::left);
	cout<<setw(10)<<setiosflags(ios::right)<<setprecision(.2)<<sal;
	//printf("%-.2f ",sal);
	cout<<setw(12)<<setiosflags(ios::right)<<pho_no;
//	printf("%-.2f ",sal);
	cout<<endl;

}


/*
void employee::display()
{

//	cout<<"Name"<<" "<<"Salary"<<" "<<"phone No"<<" "<<endl;
	
	cout<<endl;

	cout.width(10);
	cout.setf(ios::left);
	cout<<empname;
	
	cout.width(10);
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::right);
	//cout.precision(2);
	cout<<sal;
	
	cout.width(12);
	cout<<pho_no;
	
	cout<<endl;
	//cout<<empname<<endl<<sal<<endl<<pho_no<<endl;
}*/