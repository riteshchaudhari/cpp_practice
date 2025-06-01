#include"Header.h"


void main()
{
	int num,size;

		

	cout<<"How Many Students.: "<<endl;
	cin>>num;

	Student * ptr=new Student[num];

	char name[10];
	int roll;
	int marks[3];



	for(int j=0;j<num;j++)
	{
		cout<<"Enter Student Roll.: ";
		cin>>roll;

		cout<<"Enter Student Name.: ";
		cin>>name;

		cout<<"Enter subjects.: ";
		cin>>size;
		cout<<"enter marks"<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>marks[i];
		}


		

		
		ptr[j].getData(roll,name,marks,size);
		
	
	}

	for(int i=0;i<num;i++)
	
	{
		ptr[i].display(size);
	}



	delete [] ptr;
}
