#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main()
{
    //using comparators using get and less than 
    //set<int> myset;
    //into reverse order 
    //set<int ,greater<int>>myset;
    //for less 
    set<int ,less<int>>myset; //default behaviour of set
    myset.insert(40);
    myset.insert(50);
    myset.insert(60);
    myset.insert(70);
    for (auto &val : myset)
    {
        cout << val <<"--"<< endl;
    }

    //map<int,int> mymap;
    //now in reverse order 
    map<int,int,greater<int>> mymap;
    mymap[10]=200;
    mymap[20]=300;
    mymap[30]=400;
    mymap[40]=500;
    mymap[50]=600;

    for (auto &val : mymap)
    {
        cout << val.first <<"--"<<val.second<< endl;
    }

    set<pair<int,int>,less<pair<int,int>>> myset1;
       

    return 0;
}