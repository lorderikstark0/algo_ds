#include <iostream>
#include <vector>
using namespace std;

void checkEvenorNot(int num)
{
    if(num%2==0)
    {
        goto even;
    }
    else{
        goto odd;

    }
    even:
        cout << num <<" is even";
        return ;
    odd :
        cout <<num << " is odd";    

}
int main()
{
    int n ;
    cin >> n;
    vector<int >p;
    while(n-- >0)
    {
        int h;cin >> h;p.push_back(h);
        
    }
    for(size_t i=0;i<p.size();i++)
    {
        checkEvenorNot(p[i]);
        cout <<"\n";
    }
    return 0;
}