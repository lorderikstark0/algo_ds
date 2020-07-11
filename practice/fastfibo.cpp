#include <bits/stdc++.h>
using namespace std;

int getNthFib(int n)
{
         long long int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 333; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}


int main()
{
        int t;
        cin >> t;
        cout << getNthFib(t);
        return 0;

}

