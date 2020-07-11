#include <iostream>
#include <cmath>
#include <cmath>
 using namespace std;

 int function2(int num);
 int function1(int num)
 {
         return function1(function2(num));
 }

 int function2(int num)
 {
        double p = pow(num,num*2);
         return (int) p;
 }

 int main()
 {
         int t;
         cin >> t;
         cout << function1(t)<<endl;
        return 0;
 }

