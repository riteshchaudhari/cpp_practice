#include"header.h"


Date::Date()
{

	cout<<"Date()"<<endl;
	day = month = 1;
    year = 2015;

}

Date::Date(int day,int month,int year)
{

	cout<<"Date(int,int,int)"<<endl;
	this->day=day;
	this->month=month;
	this->year=year;
}

void Date::setdate( int day, int month, int year ) 
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::display() 
{
    cout<<day<<" - "<<month<<" - "<<year<<endl;
}


Date::~Date() 
{
    cout<<"~Date()"<<endl;
}

string::string()
{
	str=new char[1];

	cout<<"string()"<<endl;
}

string::string(char * str)
{

	cout<<"string(char *)"<<endl;
	this->str = new char[ strlen( str ) + 1 ];
    strcpy( this->str, str );
}

void string::setstring(char * str)
{
	delete [] this->str;
	this->str = new char[ strlen( str ) + 1 ];
    strcpy( this->str, str );

}

void string::display()
{

	cout<<str<<endl;
}

string::~string() 
{
    cout<<"~string()"<<endl;
    delete [] str;
}

Employee::Employee()
{

	cout<<"Employee"<<endl;

}

Employee::Employee(char *str,int day,int month,int year): dob(day, month, year), name( str)

{
  
	cout<<"Employee( char *, int, int, int )"<<endl;
	empid=count;
	count++;
}

void Employee::setdata(  char * str, int day, int month, int year ) 
{
    
    name.setstring( str );
    dob.setdate(day, month, year);
	
}



void Employee::display() {
    cout<<"-------------------"<<endl;
    cout<<"empid : "<<empid<<endl;
    cout<<"name: ";
    name.display();
    cout<<"Emp DOB : ";
    dob.display();
}

Employee::~Employee() 
{
    cout<<"~Emp()"<<endl;
}

Manager::Manager()
{
	no=0;
	bsal=0;
	allownce=0;
}

Manager::Manager(int no,int bsal,int allownce)
{
	this->no=no;
	this->bsal=bsal;
	this->allownce=allownce;
}

void Manager::acceptinfo(int no,int bsal,int allownce)
{
	this->no=no;
	this->bsal=bsal;
	this->allownce=allownce;


}

int Manager::computesal()
{
	return(bsal+allownce);
}

void Manager::displayinfo()
{
	cout<<"Number of subordinates: "<<no<<endl;
	cout<<"Basic salary: "<<bsal<<endl;
	cout<<"Dearness Allowance: "<<allownce<<endl;
}