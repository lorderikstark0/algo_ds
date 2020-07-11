#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class myclass2{
    public:
        int speed(int maxspeed);
        int shape(int length ,int breadth);
};

int myclass2::shape(int length,int breadth)
{
    return length+breadth;
}

int myclass2::speed(int maxspeed )
{
    return maxspeed;
}

int main()
{
    myclass2 n;
    cout << n.shape(4,5)<<"\n";
    cout << n.speed(6);
    return 0;
}