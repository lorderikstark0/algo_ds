#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int* arr_ret(int *arr ,char op,int size)
{
    //takes into func declaration two args one is array and the other one is the operator for the whole array 
    // and returns the new array 

    if(op=='+')
    {
        for(int i=0;i<size;i++)
        {
            *(arr+i)=*(arr+i)+2;
        }
    } 
    else if(op=='-')
    {
        for(int i=0;i<size;i++)
        {
            *(arr+i)=*(arr+i)-2;
        }
    }
    else 
    {
        for(int i=0;i<size;i++)
        {
            *(arr+i)=*(arr+i)/2;
        }
    }
    return arr;
}

void printing (int *arr ,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",*(arr+i));
    }
}
int main()
{
    printf("Enter the number of testcases \n");
    int testcases;
    scanf("%d",&testcases);
    while(testcases-- >0)
    {
        printf("Enter the size of the array \n");
        int size ;
        scanf("%d",&size);
        int *arr =(int*)malloc(sizeof(int)*size);
        printf("Now enter into the array \n");
        for(int i=0;i<size;i++)
        {
            scanf("%d",arr+i);
        }
        char op;
        printf("Enter the operator \n");
        scanf("%c",&op);
        printing(arr_ret(arr,op,size),size);

    }
    return 0;
}