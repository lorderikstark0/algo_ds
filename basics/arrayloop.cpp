#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
  printf("Enter the number of testcases \n");
  int testcases ;
  scanf("%d",&testcases);
  while(testcases-- >0)
  {
    
    int arr[500];
   // for(int i=0;i<500;i++)
    //{
    //  cout << *(ar+i)<<endl;
   // }
   //printing the memeory space 

    printf("Enter the position whose address is required \n");
    int posn ;
    cin >> posn;
   cout << &arr[posn];
   printf("\n");

  }
  return 0;
}
