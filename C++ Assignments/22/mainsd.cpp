#include <iostream>
using namespace std;

class Base {
public:
    virtual void fun() {
        
    }
};

class Der : public Base {
    
};


int main() {

    int i;
    char ch;
    char * cptr;
    int * iptr;
   float f;
    Base b;
    Der d;
    
    cout<<typeid(i).name()<<endl;
    cout<<typeid(ch).name()<<endl;
    cout<<typeid(cptr).name()<<endl;
    cout<<typeid(iptr).name()<<endl;
    cout<<typeid(f).name()<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<typeid(d).name()<<endl;
    
    */
    if( strcmp(  typeid(i).name(), "i" ) == 0 ) {
        cout<<" i is integer "<<endl;
    }
    
    
    if( typeid(i) == typeid(int) ) {
        cout<<"i is integer"<<endl;
    }
    
    Base * ptr = new Der();
    if( typeid(ptr) == typeid(Der) ) {
        cout<<"ptr -> Der"<<endl;
    }
    else {
        cout<<"ptr !-> Der"<<endl;
    }
    
    return 0;
}
















