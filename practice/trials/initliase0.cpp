#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n =3;
    int m=4;
    //create an vector of size m and n 
    vector<vector<int>> vec(n,vector<int> (m,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout <<vec[i][j]<<" ";
        }
        cout <<"\n";
    }   
    return 0;
}