#include <iostream>
using namespace std;

long long int recur(int n)
{
        if(n==0)
                return 0;
        else if (n==1)
                return 1;
        else return (n-1)+(n-2);
  }

int main()
{
        int n ;
        cin >> n;
       cout << recur(n)<<endl;
       return 0;
}

        
