#include "Header.h"

void main()
{
	Manager m1,m2(20,40000,4000);
	int sal;

	m1.acceptinfo(10,50000,5000);
	m1.displayinfo();
	m2.displayinfo();

	sal=m2.computesal();

	cout<<"salary is "<<sal<<endl;


}