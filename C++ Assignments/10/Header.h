#include<iostream.h>
#include<conio.h>
#include<string.h>


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
	static int empId;
	String name1;
	Date dob;

public:
	Employee()
	{
		cout<<"Employee()"<<endl;
		empId=1;
	}

	Employee(int day,int month,int year,char *name):dob(day,month,year),name1(name)
	{
		this->empId=empId;
		empId++;
	}

	void display()
	{
		this->dob.display();
		this->name1.display();
		cout<<"EmpId.: "<<empId<<endl;
	}

	void setData(int day,int month,int year,char *name)
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

int Employee::empId=10;




