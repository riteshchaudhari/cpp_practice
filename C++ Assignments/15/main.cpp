#include "Header.h"

void line()
{
	cout<<"------------------------------"<<endl;
}
void main()
{

	cout<<"---------Sales Manager----------"<<endl;
	SalesManager sm;
	sm.getInfo();
	sm.AcceptInfo(100,"jai",12,12,1992,10,350.60f,2,20000,2000,0.60f,4);
	sm.DisplayInfo();
	cout<<sm.ComputeSalary()<<endl;

	


}
