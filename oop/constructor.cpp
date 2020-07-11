#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

class abc{
    public:
        string brand;
        string model;

    int  year;
    abc(string brand, string model,int year)
    {
        this->brand=brand;
        this->model=model;
        this->year=year;
    }

    string tot_specs()
    {
            string ac =brand+model ;
            
        return ac;
    }
    int ret_year()
    {
        return year;
    }
};


int main()
{
    abc obj1("lol","abc",8765);
    abc obj2("brr","def",1234);

    //printing the values 

   cout << obj1.tot_specs();
    cout << obj2.ret_year();
    

}