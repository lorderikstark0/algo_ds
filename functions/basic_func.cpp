#include <iostream>
#include <cmath> //or can use #include <math.h>
#include <cstdlib>


using namespace std;

void printing(int p)
{
    if(p!=0)
    {
        printf("%d",p);
    }
}

int make_lols(int p)
{
    if(p==M_PI)
    {   
        printing(5.313);    
        return 5.313;

    }
    else 
  
    return make_lols(p%2);
}



int main()
{
    printf("Enter some number for test \n");
    int num;
    scanf("%d",&num);
    make_lols(num);
    return 0;

}