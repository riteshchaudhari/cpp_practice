#include<iostream.h>
#include<string.h>
static int count=1001;

class Date
{
	int day,month,year;
public:
	Date();
	Date(int,int,int);
	~Date();
    void setdate( int, int, int );
    void display();

};


class string
{

	char *str;
public:
	string();
	string(char *);
	void setstring(char *);
	void display();
	~string();

};

class Employee
{
	int empid;
	string name;
	Date dob;

public:
	Employee();
	Employee(char *, int,int,int);
	void setdata(char *, int,int,int);
	void display();
	~Employee();
};

class Manager : public Employee
{
	int no;
	int bsal;
	int allownce;
public:
	Manager();
	Manager(int,int,int);
	void acceptinfo(int,int,int);
	void displayinfo();
	int computesal();

};