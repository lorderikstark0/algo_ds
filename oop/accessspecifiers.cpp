/*

in cpp thaer are three types of access specifiers 

public  members are accessible from outside the class
private     members cannot be accessed (or viewed) from outside the class 
protected   members cannot be accessed from outside the class, however, they can be accessed in inherited classes

*/

#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;


class abc{
    public:
        int x;
        private :
        int y;


};

int main()
{
    abc j;
    j.x=45;
    j.y=7;//not allowed as dec;ared private 
    return 0;
}
