#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
//set :associative continares like maps 
//key value pairs 
int main()
{

map<int,string> mymap;
set<int> myset;

myset.insert(100);
myset.insert(200);
myset.insert(300);
myset.insert(400);
myset.insert(500);
myset.insert(600);
//adding a duplicate value 
myset.insert(600); 
myset.erase(100);

//erasing the first using iterator 
myset.erase(myset.begin());

for(auto &val : myset )
{
    cout << val <<endl;
}






    return 0;
}