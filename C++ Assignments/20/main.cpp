#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
using namespace std;

bool test( int val ) {
    cout<<"val = "<<val<<endl;
    return val > 10;
}


int main(int argc, const char * argv[]) {

cout<<"------------------Vector-----------------"<<endl;
    
    vector<char>vi(1);
	vector<char>::iterator it;

    
    vi.push_back('h');
	vi.push_back('e');
	vi.push_back('l');
	vi.push_back('l');
	vi.push_back('o');
	vi.push_back(' ');
	vi.push_back('w');
	vi.push_back('o');
	vi.push_back('r');
	vi.push_back('l');
	vi.push_back('d');
	vi.push_back('!');
	vi.push_back('!');
	vi.push_back('!');
        
    it = vi.begin();
    while( it != vi.end() ) {
        cout<<*it<<"";
        it++;
    }
    cout<<endl;

	cout<<"----------------LIST---------------------"<<endl;

	list<char> l1;
	list<char>::iterator ite;

	l1.push_back('h');
	l1.push_back('e');
	l1.push_back('l');
	l1.push_back('l');
	l1.push_back('o');
	l1.push_back(' ');
	l1.push_back('w');
	l1.push_back('o');
	l1.push_back('r');
	l1.push_back('l');
	l1.push_back('d');
	l1.push_back('!');
	l1.push_back('!');
	l1.push_back('!');

	ite = l1.begin();
    while( ite != l1.end() ) {
        cout<<*ite<<"";
        ite++;
    }
    cout<<endl;


 
    
    return 0;
}




























/*
    map<char, int> m;
    
    m.insert( pair<char, int>( 'Z', 90 ) );
    m.insert( pair<char, int>( 'B', 66 ) );
    m.insert( pair<char, int>( 'A', 65 ) );
    m.insert( pair<char, int>( 'Z', 91 ) );
    m.insert( pair<char, int>( 'C', 67 ) );
    
    map<char, int>::iterator it;
    it = m.begin();
    while( it != m.end() ) {
        cout<< (*it).first<<" - "<<it->second<<endl;
        it++;
    }
    
    it = m.begin();
    it++;
    it++;
    m.insert( it , pair<char, int>('D', 68 ) );
    it = m.begin();
    cout<<"-----------"<<endl;
    while( it != m.end() ) {
        cout<< (*it).first<<" - "<<it->second<<endl;
        it++;
    }
    
    it = m.find('D');
    cout<<"val for D = "<<it->second<<endl;
    
    m.erase('D');
    it = m.begin();
    cout<<"-----------"<<endl;
    while( it != m.end() ) {
        cout<< (*it).first<<" - "<<it->second<<endl;
        it++;
    }
     */
    
	/*
    list<int> l1, l2;
    
    l1.push_back( 10 );
    l1.push_front( 20 );
    l1.push_back( 15 );
    l1.push_front( 25 );
    l1.sort();
    
    copy(l1.begin(), l1.end(), l2.begin());
    
    list<int>::iterator it;
    it = l1.begin();
    while( it != l1.end() ) {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    
    it = l1.begin();
    it++;
    it++;
    l1.insert( it, 24);
    it++;
    l1.insert( it, 42);
    
    it = l1.begin();
    while( it != l1.end() ) {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    
    l1.pop_front();
    l1.pop_back();
    l1.remove(24);
    
    it = l1.begin();
    while( it != l1.end() ) {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    */