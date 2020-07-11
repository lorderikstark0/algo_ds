#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class myclass {
    public:
        void mymethod();
};

//now method declared over here 
void myclass::mymethod()
{
    cout <<"bit exploration";
}
int main()
{
    myclass d;
    d.mymethod();
    return 0;
}