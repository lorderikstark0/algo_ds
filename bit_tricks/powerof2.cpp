#include <bits/stdc++.h>
#include <cstdlib>
#include <time.h>
using namespace std;

bool isPowerof2(int x)
{
    return x && (!(x &(x-1)));
}


int main()
{
    srand(time(0));
    for(int i=0;i<500;i++)
    {
        printf("%d\n",isPowerof2(rand()));
    }
    return 0;
    
}