#include <iostream>
#include <cstdlib>
using namespace std;

int addition(int a ,int b)
{
    return a+b;
}

int subtraction(int a ,int b)
{
    if(a<b)
    return b-a;
    else 
    return a-b;
}

int multiply(int a ,int b)
{
    return a*b;
}
int divide(int a ,int b)
{
    if(a<b)
    return b/a;
    else 
    return a/b;
}

int main()
{
    int random =rand();
    int testcases;
    cout <<"Enter the number of testcases :"<<endl;
    cin >> testcases >>endl;
    while(testcases-- >0)
    {
        
        srand(5);
        int a, b;
        cout <<"Enter the number "<<endl;
        cout <<"Enter the first number "<<endl;
        cin >> a >> endl;
        cout <<"Enter the second number "<<endl;
        cin >> b>> endl;

        cout << addition(a,b)<<endl;
        cout << subtraction(a,b)<<endl;
        cout << multiply(a,b)<<endl;
        cout << divison(a,b)<<endl;

        //to show the types of data available 

        int i=10;
        cout << i<< endl;

        float mynum=4.56;
        cout <<mynum<<endl;

        double mynum1=19.45;
        cout <<mynum1<<endl;       


        //scientific number 
        float f1 =35e4;
        float f2 =13E6;

        cout <<f1;
        cout <<f2;

        //bool type data 
        bool isTrash =true;
        bool iaNotTrash =false;

        cout <<isTrash;
        cout <<isNotTrash;




    }
}