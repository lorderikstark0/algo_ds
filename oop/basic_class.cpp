#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

class class1{
    public:
        int mynum;//attributre of the class
        string myString; //attr of the class 
};

//calling object of that class
int main()
{
    class1 obj;
    obj.mynum=7;
    obj.myString="lolcat";

    cout <<obj.myString<<"\n";
    cout <<obj.mynum<<endl;
    return 0;
}
