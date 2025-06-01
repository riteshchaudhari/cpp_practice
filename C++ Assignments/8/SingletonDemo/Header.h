#include<iostream>
using namespace std;

class Math 
{
    Math() 
	{
        cout<<"Math()"<<endl;
    }
    static Math * ptr;
public:
    
    static Math * getInstance() {
        if( ptr == NULL ) 
		{
            ptr = new Math();
        }
        return ptr;
    }
    
    
    int add( int num1, int num2 ) {
        return num1 + num2 ;
    }
    int sub( int num1, int num2 ) {
        return num1 - num2 ;
    }
    int mul( int num1, int num2 ) {
        return num1 * num2 ;
    }
    int div( int num1, int num2 ) {
        return num1 / num2 ;
    }

};

Math * Math::ptr = NULL;




















