#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int plusfuncint(int x ,int y)
{
    return x+y;
}
double plusfuncdouble(double x ,double y)
{
    return x+y;
}

int main()
{
   int myNum1 = plusfuncint(8, 5);
  double myNum2 = plusfuncdouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}