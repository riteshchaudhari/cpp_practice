#include<iostream>
using namespace std;

class CString
{
private:
	char *str;
	int length;

public:
	   CString(); // default constructor
	   CString(char *);
	   CString(int,char);
	   CString(const CString &);
	   void acceptString();
	   char * getCString()const;


       char * initString(){
		   delete []str;
		   str =new char[100];
		   return str;
	   }

	   void display() const;
	   ~CString();
	   


		int operator==(const CString & s);   //s1==s2

		CString operator =(const CString &s);  //s1=s2=s and asigment operator
		                                      //except copy constructor


		char &operator [](int pos); 
		
	  };

	ostream & operator << (ostream & ,const CString &);
	istream & operator >> (istream & , CString &);
