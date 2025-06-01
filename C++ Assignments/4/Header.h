#include<iostream.h>
#include<String.h>


class Student
{
	int roll;
	char *name;
	static int n;
	int *marks;
public:
	Student()
	{
		cout<<"Default"<<endl;
		roll=0;
		name=NULL;
		marks=NULL;
		n++;
	}
	static void getI()
	{
		cout<<n;
	}

	void getData(int roll,char *name,int *marks,int size)
	{
		this->roll=roll;
		this->name=new char[strlen(name)+1];
		strcpy(this->name,name);
		cout<<"-----------------"<<endl;
		this->marks=new int[size];
	
		for(int i=0;i<size;i++)
		{
			this->marks[i]=marks[i];
		}

		/*cout<<"Roll.: "<<this->roll<<endl;
		cout<<"Name.: "<<this->name<<endl;
		cout<<"Marks.: "<<endl;
		for(i=0;i<size;i++)
		{
			cout<<this->marks[i]<<" ";
		}
		cout<<endl<<endl;*/

	}


	void display(int size)
	{
		//for(int i=0;i<size;i++)
		//{
			//while(ptr!=temp)
			//{
				cout<<"Roll.: "<<this->roll<<endl;
				cout<<"Name.: "<<this->name<<endl;
				cout<<"Marks.: "<<endl;
				for(int i=0;i<size;i++)
				{
					cout<<this->marks[i]<<" ";
				}
				cout<<endl<<endl;
				//ptr++;
			//}
	}


	~Student()
	{
	
		delete [] marks;
		delete [] name;
		cout<<"~Student()"<<endl;
	}

};
int Student::n=0;
