#include <bits/stdc++.h>

using namespace std;

int main()
{
    printf("Enter the size of the array \n");
    int size ;
    cin >> size;
    printf("Enter the array elements \n");
    int *arr =(int*)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    int mask,x=0;
    for(int i=0;i<size;i++)
    {
        mask=~((1<<arr[i+1])-1);
        x &=mask;
        cout << x<<endl;
    }




    return 0;
}