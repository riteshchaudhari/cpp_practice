
#include<iostream.h>
#include<string.h>

class Emp
{	int a;
public:
	Emp();
    virtual	int bonus()
	{
		cout<<"This is Emp bonus()"<<endl;
		return 0;
	}

};

class Manager : public Emp
{
	int b;
//	Emp e;
public:
	Manager();
    int bonus()
		{
		cout<<"This is manager bonus()"<<endl;
		return 0;
	}
};


Emp::Emp()
{
	a=0;
}


Manager::Manager()
{
	
	
	b=0;
}

int main()
{
Emp e;
Manager d;
Emp * ptr=new Manager();
ptr->bonus();




if( typeid(ptr) == typeid(Manager) ) {
        cout<<"ptr -> Manager"<<endl;
    }
    else {
        cout<<"ptr !-> Emp"<<endl;
    }



return 0;
}
