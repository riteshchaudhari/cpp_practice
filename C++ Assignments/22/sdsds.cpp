/*
#include <iostream>
#include<string>
using namespace std;

class Base {
public:
    virtual void fun() {
        cout<<"Base fun"<<endl;
    }
};

class Der : public Base {
		void fun() {
        cout<<"Derived fun"<<endl;
    }
};


int main(int argc, const char * argv[]) {
    Base b;
    Der d;
        
    Base * ptr=new Der();
	std::cout << typeid(*ptr).name() << std::endl; 

	cout<<typeid(Der).name()<<endl;
	ptr->fun();

    if( typeid(ptr).name() == typeid(Der).name()) {
       cout<<"ptr -> Der"<<endl;
    }
    else {
        cout<<"ptr !-> Base"<<endl;
    }
   
    return 0;
}
*/