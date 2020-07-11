#include <bits/stdc++.h>
using namespace std;

void maxmin(vector<int>& arr )
{
  sort(arr.begin(),arr.end(),greater<int>());
  int max=0;int min=0;
int si=arr.size();
for(int i=0;i<si-2;i++)
{
    max =max+arr[i];
}
for(int i=1;i<si-2;i++)
{
    min=min+arr[i];
}
  cout << max << " "<<min;
}
int main()
{
  vector<int> arr;
  int t;int p;
  cin >>t ;
  for(int i=0;i<t;i++)
  {
    cin >> p;
    arr.push_back(p);
  }
  maxmin(arr);
  return 0;
}
