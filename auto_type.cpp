//cpp program to demonstrate working of auto 
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main()
{
    auto x=4;
    auto y=3.34;
    cout <<typeid(x).name()<<endl;
    cout <<typeid(y).name()<<endl;
    return 0;
}