#include <iostream>
#include <vector>

int main(int argc ,char ** argv)
{
        vector<int> ve ={1,2,3};
        int sum=0;
        for(auto val:ve){
        sum+=val;
        }
        cout << sum << endl;
        int sum1=0;
        for(const auto& val: ve)
        {
                sum1+=val;
        }
        cout << sum << endl;
        int sum3 = accumulate(ve.begin(),ve.end(),0);
        cout << sum3<<endl;
        return 0;
}

