/*23.Modify class Employee to have 
- Salary (float)
- phone number
- Accept the information for n employees 
- Display the data in tabular form 
- Left justify the char/string fields
- Right justify the numeric fields
- Specify the required field width. Fill the empty spaces with '*'.
- Have two digit of precision for real numbers
Name	              Salary	            Phone
xxxxxxxxxxxxx	      9999999.99	      99999999999
xxxxxxxx	            99999.99	     999999999999    */

#include "header.h"
int main()
{
	int n;
	cout<<"Enter the no of Emp :";
	cin>>n;

	employee *e=new employee[n];

	for(int i=0;i<n;i++)
	{
		e[i].getdata();
	}
	
/*	cout.width(10);
	cout<<"Name";

	cout.width(10);
	cout<<"Salary";

	cout.width(12);
	cout<<"phone No";
*/
	cout<<"----------------------------------------------------"<<endl;
	cout<<setw(10)<<setiosflags(ios::internal)<<"Name";
	cout<<setw(2)<<setiosflags(ios::internal)<<"Salary";
	cout<<setw(12)<<setiosflags(ios::internal)<<"Phone No";
	cout<<resetiosflags(ios::internal);
	cout<<endl;
	cout<<"----------------------------------------------------"<<endl;
	for( i=0;i<n;i++)
	{
		
		e[i].display();
		cout<<"----------------------------------------------------"<<endl;
	}
	return 0;
}


