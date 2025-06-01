#include"Header.h"



void main()
{
	Employee e(14,9,2015,"Prithvi");
	e.display();

	Employee e2(12,9,2015,"Prithvi");	
	e2.display();

	Employee e3(7,6,2014,"Prithvi");
	e3.setData(23,4,2200,"Infinity");
	e3.display();

	int nohw;
	int empId;
	float rate;

	WageEmp we;

	cout<<"Enter How Many Hours To Work.: ";
	cin>>nohw;

	cout<<"Enter Rate Per Hour.: ";
	cin>>rate;

	empId=we.getEmpId();

	cout<<"Id.: "<<empId;

	we.computeSal(empId,nohw,rate);
	we.display();

getch();
}
