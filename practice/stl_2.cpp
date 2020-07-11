#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main()
{
    vector<int> p;
    p.push_back(10);
    p.push_back(20);
    p.push_back(30);
    p.push_back(40);

    cout <<"Size:"<<p.size() <<endl;
    p.clear();
    cout <<"Size:"<<p.size()<<endl;

    //iterator like ppinters
    vector<int>::iterator v =p.begin();
    cout <<*v<<endl;
    
    for(;v=!p.end();v++)
    {
        cout << "Value" <<*v <<endl;
    }

    //vector is contiguous memeory
    //list is doubly linked list 
    list <int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);

    auto itr =l.begin();
    for(;itr!=l.end();itr++)
    {
        cout << *itr <<endl;
    }

    //sort takes random access iterators 
    //list is bidirectional iterators

    return 0;
}