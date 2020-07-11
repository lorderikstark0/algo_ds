#include <bits/stdc++.h>
using namespace std;

int numofoccur(vector<int>& cont,int elemtocnt)
{
int counter=0;
vector<int>::iterator iter;
for(iter =cont.begin();iter!=cont.end();++iter)
   {
      if(*iter==elemtocnt)
       {
        ++counter;
       }

     }
return counter;
}

int main()
{
   int t;
   cin >> t;
   vector<int> cont;
   while(t-- >0)
   {
   	int n ;
   	cin >> n;
   for(int i=0;i<n;i++)
   {
   cont.push_back(t); 
   }   
   }
  int elemtocnt;
  cin >> elemtocnt;
  cout << numofoccur(cont,elemtocnt);
  return 0;
}

