#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> vect{{ 1, 2, 3 }, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9 }  };
    //taking nputs in 2d vectors
    for(int i=0;i<vect.size();i++)
    {
        for(int j=0;j<vect[i].size();j++)
        {
            cout << vect[i][j]<<endl;
        }
        cout << endl;
    }
    return 0;
}
