#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

//finding string lenght  passed into argumnet s

int lengthvalue(string ans)
{
    return ans.size();
}

//length using array
int lenghtval1(string ans )
{
    int opcount=0;int i=0;
    while(ans[i])
    {
        opcount++;
        i++;
    }
    return opcount;
}

char accesselement (string ans,int posn)
{
    return ans[posn];
}

//changing position based on a specific posn
string returnstring(string ans)
{
    //changing the elemnt by lol at every even posn
    for(int i=0;i<ans.size();i++)
    {
        if(i%2==0)
        {
            ans[i]='@';
        }
    }
    return ans;
}

    int main()
{
    string greeting ="lol:) \n";
    cout <<greeting<<endl;

        //bit shifting the number

    cout <<"Enter some number "<<endl;
    int number ,number1;
    cin >> number;
    number=number<<2;
    number1=(number>>2) >>2;
    cout <<"bit shifted by 2 left "<<number <<endl;
    cout <<"bit shifted by right 2 "<< number1 <<endl;


    //greeting
    string p;
    cout <<"Enter some string"<<endl;
    cin >> p ;
    cout << "\nolle olle "<< p << endl;


    //concatenetad string
    string firstname="hello";
    string lastname="bye";
    string fullname = firstname+lastname;
    cout <<fullname <<"\n";

    string ans;
    cout <<"Enter the string whose length has to be found \n";
    cin >> ans ;
    cout << "the lenght is \n"<<lengthvalue(ans)<<endl;
    cout << "the another length is \n"<<lenghtval1(ans)<<endl;
    cout << accesselement(ans,2)<<endl;
    cout <<returnstring(ans)<<endl;

    //acces the array eleemnt in cpp
     int arr[8] = {0,1,2,3,4342342,423423,1};
    cout << arr[3];


}
