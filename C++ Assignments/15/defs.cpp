#include "Header.h"
	
Date::Date()
	{
	cout<<"Date()"<<endl;
		day=month=1;
		year=1995;
	}
Date::Date(int day,int month,int year)
	{
	cout<<"Date(int,int,int)"<<endl;
		this->day=day;
		this->month=month;
		this->year=year;
	}
void Date::setdate(int day,int month,int year)
	{
		this->day=day;
		this->month=month;
		this->year=year;
	}
void Date::getdate()
	{
		cout<<"Employee Date of Birth = "<<day<<"-"<<month<<"-"<<year<<endl;
	}
Date::~Date()
{
	cout<<"~Date()"<<endl;
}
Employee::Employee()
	{
	cout<<"Employee()"<<endl;
		//cout<<"Emp"<<endl;
		empid =0;
		name = new char[1];
		*name=0;
		dob=Date(1,1,2015);
	}
Employee::Employee(int empid,char * name,int day,int month,int year):dob(day,month,year)
	{
	cout<<"Employee(int,char *,int,int,int)"<<endl;
		this->empid=empid;
		this->name=name;
		//this->dob=Date(day,month,year);
		//this->dob.setdate(day,month,year);
	}

Employee::~Employee()
	{
		cout<<"~Employee()"<<endl;
	}
void Employee::display()

{ 
	cout<<"Employee Id = "<<empid<<"  "<<" Employee Name = "<<name<< endl;
	this->dob.getdate();
}
void Employee::setData(int empid,char * name,int day,int month,int year)
{
	this->empid=empid;
	this->name=name;
	this->dob.setdate(day,month,year);
}


//--------------------WageEmployee---------------


WageEmployee::WageEmployee()
{
	cout<<"WageEmployee()"<<endl;

	hours=0;
	rate=100.50;
}
WageEmployee::WageEmployee(int hours,float rate,int empid,char * name,int day,int month,int year):Employee(empid,name,day,month,year)
{
	cout<<"WageEmployee(int,float,int,char *,int,int,int)"<<endl;
	this->hours=hours;
	this->rate=rate;
}
void WageEmployee::AcceptInfo(int hours,float rate)
{
	this->hours=hours;
	this->rate=rate;
}
void WageEmployee::DisplayInfo()
{
	this->display();
	cout<<"No. of hours worked="<< hours<<"Rate per Hours"<<rate<<endl;
}
float WageEmployee::ComputeSalary()
{
	float sal;
	sal=rate*hours;
	return sal;
}
WageEmployee::~WageEmployee()
{
	cout<<"~WageEmployee()"<<endl;
}
int WageEmployee::getHours()
{
	return hours;
}
float WageEmployee::getRate()
{
	return rate;
}




//-------------SalesPerson-------------

SalesPerson::SalesPerson()
{
	cout<<"Sales Person()"<<endl;
	commission=0;
	salesmade=0;

}
 SalesPerson::SalesPerson(int hours,float rate,int empid,char * name,int day,int month,int year,float commission,float salesmade):WageEmployee(hours,rate,empid,name,day,month,year)
{
	cout<<"Sales Person(paramaterized)"<<endl;
	this->commission=commission;
	this->salesmade=salesmade;
}
void SalesPerson::AcceptInfo(float commission,float salesmade)
{
	this->commission=commission;
	this->salesmade=salesmade;
}

void SalesPerson::DisplayInfo()
{
	//this->WageEmployee::DisplayInfo();
	cout<<"Commission = "<<commission <<" sales made = "<<salesmade<<endl;
}
float  SalesPerson::ComputeSalary()
{
	float newsal;
	newsal=(this->WageEmployee::ComputeSalary()+this->WageEmployee::ComputeSalary()*commission)*salesmade;
	return newsal;
}
SalesPerson::~SalesPerson()
{
	cout<<"~SalesPerson()"<<endl;
}
float SalesPerson::getComm()
{
return commission;
}
float SalesPerson::getSalesmade()
{
return salesmade;
}
//----------------Manager------------------------

Manager::Manager()
{
	subemp=0;
	basicsal=0;
	allowance=0;
}
Manager::Manager(int empid,char * name,int day,int month,int year,int subemp,float basicsal,float allowance):Employee(empid,name,day,month,year)
{
	this->subemp=subemp;
	this->basicsal=basicsal;
	this->allowance=allowance;
}
void Manager::AcceptInfo(int subemp,float basicsal,float allowance)
{
	this->subemp=subemp;
	this->basicsal=basicsal;
	this->allowance=allowance;
}
void Manager::DisplayInfo()
{
	this->display();
	cout<<"Basic Salary = "<<basicsal<<" No. Of SubOrdinates = "<<subemp<<" DearNess Allowance = "<<allowance<<endl;
}
float Manager::ComputeSalary()
{
	float sal=basicsal+allowance;
	return sal;
}
float Manager::getbasicsal()
{
	return basicsal;
}
float Manager::getAllowance()
{
	return allowance;
}

//-------------------SalesPerson-----------


SalesManager::SalesManager():Manager(),SalesPerson()
{

}
void SalesManager::getInfo()
{

	Manager::DisplayInfo();
	//SalesPerson::DisplayInfo();
}
void SalesManager::AcceptInfo(int empid,char * name,int day,int month,int year,int hours,float rate,int subemp,float basicsal,float allowance,float comm,float salesmade)
{
	Employee::setData(empid,name,day,month,year);
	Manager::AcceptInfo(subemp,basicsal,allowance);
	WageEmployee::AcceptInfo(hours,rate);
	SalesPerson::AcceptInfo(comm,salesmade);

}

void SalesManager::DisplayInfo()
{
	Manager::DisplayInfo();
	SalesPerson::DisplayInfo();
}

float SalesManager::ComputeSalary()
{
	float sal=0;
	sal=(getHours()*getRate())+(((getHours()*getRate())*getComm())*getSalesmade())+getbasicsal()+getAllowance();
	return sal;
}









	
