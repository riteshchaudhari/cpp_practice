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
		cout<<this->day<<this->month<<this->year<<endl;
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
		if(empId!=10)
		{
			this->empId=empId;
		}
	}

	Employee(int day,int month,int year,char *name):dob(day,month,year),name1(name)
	{
		this->empId=empId;
		empId++;
	}

	int & getEmpId()
	{
		return this->empId;
	}


	void display()
	{
		dob.display();
		name1.display();
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


class WageEmp:public Employee
{
	int nohw;
	float rate;
	float sal;

public:
	WageEmp()
	{
		cout<<"WageeEmp()"<<endl;
		sal=0;
	}


	WageEmp(int day,int month,int year,char *name,int nohw,float rate)
	{
		cout<<"WageEmp(int,int,int,char*,int,float)"<<endl;
		Employee::empId++;
		Employee::setData(day,month,year,name);
		this->nohw=nohw;
		this->rate=rate;
	}

	
	float computeSal(int empId,int nohw,float rate)
	{
		this->getEmpId()=getEmpId();
		this->sal=nohw*rate;
		return sal;
	}


	void display()
	{
		Employee::display();
		cout<<endl;
		cout<<"No. Of Hours Worked.: "<<nohw<<endl;
		cout<<"Rate Per Hour.: "<<rate<<endl;
		cout<<"Salary.: "<<sal<<endl;
	}

	
	~WageEmp()
	{
		cout<<"~WageEmp()"<<endl;
	}
};



class SalesPerson:public WageEmp
{
	int cmsn;
	long salesMade;

public:

	SalesPerson()
	{
		cout<<"SalesPerson()"<<endl;
		cmsn=salesMade=0;
	}


	SalesPerson(int day,int month,int year,char *name,int cmsn,long salesMade)
	{
		cout<<"SalesPerson(int,int,int,char*,int,float,int,long)"<<endl;
		Employee::empId++;
		Employee::setData(day,month,year,name);
		this->cmsn=cmsn;
		this->salesMade=salesMade;
	}


	long computeSal(int empId,int cmsn,long salesMade)
	{
		this->getEmpId()=getEmpId();
		this->salesMade=cmsn*salesMade;
		return salesMade;
	}

	
	void display()
	{
		Employee::display();
		cout<<endl;
		cout<<"Commission.: "<<cmsn<<endl;
		cout<<"Sales Made.: "<<salesMade<<endl;
	}

	
	~SalesPerson()
	{
		cout<<"~SalesPerson()"<<endl;
	}
};
