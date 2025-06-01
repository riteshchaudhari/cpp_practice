#include<iostream.h>

class Date
{
	int day,month,year;
public:
	Date();
	Date(int day,int month,int year);
	void setdate(int day,int month,int year);
	void getdate();
	~Date();

	
};
class Employee
{
	int empid;
	char *name;
	Date dob;
public:
	

	Employee();
	Employee(int empid,char * name,int day,int month,int year);
	void display();
	~Employee();
	void setData(int ,char *,int,int,int);
};




class WageEmployee :virtual public Employee

{
	int hours;
	float rate;
public:
	WageEmployee();
	WageEmployee(int,float,int,char *,int,int,int);
	void AcceptInfo(int hours,float rate);
	void DisplayInfo();
	float ComputeSalary();
	~WageEmployee();
	int getHours();
	float getRate();


};
class SalesPerson:public WageEmployee
{
	float commission;
	float salesmade;
public:
	SalesPerson();
	SalesPerson(int hours,float rate,int empid,char * name,int day,int month,int year,float commission,float salesmad);
	void AcceptInfo(float commission,float salesmade);
	void DisplayInfo();
	float ComputeSalary();
	~SalesPerson();
	float getComm();
	float getSalesmade();
};


class Manager: virtual public Employee
{
	int subemp;
	float basicsal;
	float allowance;
public:
	Manager();
	Manager(int empid,char * name,int day,int month,int year,int subemp,float basicsal,float allowance);
	void AcceptInfo(int subemp,float basicsal,float allowance);
	void DisplayInfo();
	float ComputeSalary();
	float getbasicsal();
	float getAllowance();
};
class SalesManager:public SalesPerson,public Manager
{

public:
	SalesManager();
	void getInfo();
	void AcceptInfo(int empid,char * name,int day,int month,int year,int hours,float rate,int subemp,float basicsal,float allowance,float comm,float salesmade);
	void DisplayInfo();
	float ComputeSalary();
	
};
