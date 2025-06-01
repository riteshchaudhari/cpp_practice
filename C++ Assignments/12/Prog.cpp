#include"Header.h"



void main()
{
	Employee e(14,9,2015,"Prithvi");
	e.display();

	Employee e2(12,9,2015,"Jetha");	
	e2.display();

	Employee e3(7,6,2014,"Aarya");
	e3.setData(23,4,2200,"Infinity");
	e3.display();

	int nohw;
	int empId;
	float rate;

	cout<<"Enter How Many Hours To Work.: ";
	cin>>nohw;

	cout<<"Enter Rate Per Hour.: ";
	cin>>rate;

	WageEmp we(12,3,2014,"Sarth",nohw,rate);

	empId=we.getEmpId();

	we.computeSal(empId,nohw,rate);
	we.display();

	int cmsn;
	long salesmade;

	cout<<"Enter Commission.: ";
	cin>>cmsn;

	cout<<"Enter SalesMade.: ";
	cin>>salesmade;

	SalesPerson sp(3,5,2012,"Parth",cmsn,salesmade);

	empId=sp.getEmpId();

	sp.computeSal(empId,cmsn,salesmade);
	sp.display();
getch();
}
