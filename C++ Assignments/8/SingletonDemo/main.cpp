#include "Header.h"

int main(int argc, const char * argv[]) {

    Math * ptr;
    
    ptr = Math::getInstance();
    cout<<ptr->add(10, 230)<<endl;
    
    Math * ptr1 = Math::getInstance();
    cout<<ptr->sub(10, 230)<<endl;
    
    return 0;
}
