#include <bits/stdc++.h>
using namespace std;

void sorting(vector<int>& arr)
{
        sort(arr.begin(),arr.end(),greater<int>());
        for(int i=0;i<(unsigned)arr.size();i++)
        {
                cout << arr[i]<<endl;
        }

}

int main()
{
        
        vector<int> t;
        for(int i=-50;i<50;i++)
        {
                t.push_back(i);
        }

        sorting(t);
        return 0;
}

