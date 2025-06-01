#include"header.h"

CString::CString() // default 
{
	length=0;
	str=new char[1];
	*str=0;


}
CString::CString(char *str)//Parametarized constructor
{
	length=0;
	this->str=new char[strlen(str)+1];
	strcpy(this->str,str);

}

CString::CString(int len, char s)//Parametarized constructor
{
	int i;
	length=len;
	this->str=new char[length+1];
	for(i=0;i<len;i++)
       str[i]=s;
	str[i]='\0';

	}


CString::CString(const CString &s)
{
	
	cout<<"------copy consruct---\n"<<endl;
	this->str=new char[strlen(s.str)+1];
	strcpy(str,s.str);
	
}

CString::~CString()
{

  cout<<"~CString()"<<endl;
  delete [] str;

}

void CString::acceptString()
{
	char s[100];
	cout<<"\nEnter String : ";
	cin>>s;
	delete [] str;
	str=new char[strlen(s)+1];
	strcpy(str,s);
}


void CString::display()const
{
	cout<<"str="<<str<<endl;

}


char* CString::getCString()const
{
	return str;
}


/***************overloadind*****/

int CString::operator==(const CString & s)
{
	return strcmp(this->str,s.str);

}



CString CString::operator =(const CString &s)     ///to avoid danglin pointer
{
  delete[]this->str;
  this->str=new char[strlen(s.str)+1];
  strcpy(this->str,s.str);
  return *this;
} 



ostream & operator << (ostream & out,const CString & s1)
{
	cout<<"\nstring is :";
	out<<s1.getCString()<<endl;
	return out;
}


istream & operator >> (istream &in , CString &s)
{
    /*                       
      char temp [100];       //vishal sir logic
    in>>temp;
    s.setString(temp);
    return in;

  */  


	///my logic
	cout<<"\n\nEnter string :";
	in>>s.initString();
	return in;
}

char & CString::operator []( int pos)     
{

		 return str[pos];
} 






