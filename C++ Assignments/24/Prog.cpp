#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>


class Date
{
	int day,month,year;

public:
	Date()
	{
		cout<<"Date()"<<endl;
		day=month=1;
		year=1947;
	}

	Date(int day,int month,int year)
	{
		cout<<"Date(int,int,int)"<<endl;
		this->day=day;
		this->month=month;
		this->year=year;
	}


	void setDate(int day,int month,int year)
	{
		this->day=day;
		this->month=month;
		this->year=year;	
	}

	
	Date  getDate()
	{
		return *this;
	}


	void display()
	{
		cout<<day<<"/"<<month<<"/"<<year<<endl;
	}


	~Date()
	{
		cout<<"~Date()"<<endl;
	}
};


class String
{
	char *name;

public:
	String()
	{
		cout<<"String()"<<endl;
		name=new char[2];
		strcpy(name,"a");
	}

	String(char *name)
	{
		cout<<"String(char *)"<<endl;
		this->name=new char[strlen(name)+1];
		strcpy(this->name,name);
	}

	void setString(char *name)
	{
		delete []this->name;
		this->name=new char[strlen(name)+1];
		strcpy(this->name,name);
	}

	
	char * getString()
	{
		return name;
	}


	void display()
	{
		cout<<"Name.: "<<name<<endl;
	}


	~String()
	{
		cout<<"~String()"<<endl;
		delete [] name;
	}
};


class Employee
{
	int empId;
	String name1;
	Date dob;

public:
	Employee()
	{
		cout<<"Employee()"<<endl;
		empId=1;
	}

	Employee(int empId,int day,int month,int year,char *name):dob(day,month,year),name1(name)
	{
		this->empId=empId;
	}

	void display()
	{
		this->dob.display();
		this->name1.display();
		cout<<"EmpId.: "<<empId<<endl;
	}

	void setData(int empId,int day,int month,int year,char *name)
	{
		this->empId=empId;
		name1.setString(name);
		dob.setDate(day,month,year);
	}

	~Employee()
	{
		cout<<"~Employee()"<<endl;
	}
};


void add()
{
	int empId,day,month,year;
	char * name;
	name=new char[10];
	cout<<"Enter emplyee ID:";
	cin>>empId;
	cout<<"Enter emplyee name:";
	cin>>name;
	cout<<"Enter emplyee date of birth:";
	cin>>day>>month>>year;
	Employee e(empId,day,month,year,name);

	int i=0;    
	
	ofstream out("data.txt",ios::app);

	out<<empId<<" "<<name<<" "<<day<<"-"<<month<<"-"<<year<<endl;

	cout<<endl;

	out.close();
}


void delet()
{
	string c,word;
	char ch,id;
	cout<<"Enter empID";
	cin>>id;
	istream in("data.txt");
	ostream out("temp.txt");
	if (in.is_open())
	{
		while ( getline (in,c) )
		{ 
			ch=c.get();
			while(ch!=' ')
			{
				word=word+ch;
				ch=c.get();
				cout<<c;
			}
			if(word==id)
			{
				//do nothig....
			}
			else
			{
		//		out>>c>>endl;
				//write in another file
			}
		}
		//std::remove("data.txt");
		//std::rename("temp.txt","data.txt");
	in.close();
	}

}
void search()
{
}
void display()
{
}




void main()
{
	int ch;
	while(ch)
	{
		cout<<"1]add\n2]delete\n3]display\n4]search\n5]exit:"<<endl;
		cout<<"Enter Your Choice.: ";
		cin>>ch;
	
		switch(ch)
		{
			case 1:
				add();		
				break;
			case 2:
				delet();
				break;
			case 3:
				display();
				break;
			case 4:
				search();
				break;
			case 5:
					return;
		}
	}










	/*Employee e(1,14,9,2015,"Prithvi");
	e.display();

	Employee e2(2,12,9,2015,"Prithvi");	
	e2.display();

	Employee e3(3,7,6,2014,"Prithvi");
	e3.setData(4,23,4,2200,"Infinity");
	e3.display();*/

getch();
}
