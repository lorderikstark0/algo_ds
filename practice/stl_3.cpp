//associative contianers i htis values are stored as key-value piars
#include <map>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    //pair<int ,int> p =make_pair(10,20);
    //cout <<p.first <<"--"<<p.second <<endl;
    
    map<int ,int> mp;
    mp[4] =400; //creating maps with mapping 4 nad valkue 400
    mp[3] =300;

    mp.insert(make_pair(10,100));
    //aslo notes that maps maintians the order of the key and sorted on the keys 
  //also internally uses a red black tree
    mp.insert(make_pair(10,100)); //these inserts do not matter
    mp.insert(make_pair(10,100));
    mp.insert(make_pair(10,100));
    mp.insert(make_pair(10,100));
    

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout << it->first <<"-->"<<it->second<<endl;
    }

    //multimap 
    multimap<int,int> mmp;
    mmp.insert(make_pair(4,400));
    mmp.insert(make_pair(10,700));
    mmp.insert(make_pair(3,300));
    mmp.insert(make_pair(10,900));
    mmp.insert(make_pair(10,1000));

    //it allows multiple values of key  ..but maintains the order 
    //no updation policy here 
    //mp[10]=1000 is not allowed as we dont know what key to update 
    for(auto it=mmp.begin();it!=mmp.end();it++)
    {
        cout << it->first <<"-->"<<it->second<<endl;
    }
    //clearly in case of unordeed map  the output willnot be sorted 
    //stored in hash datastructure 
    unordered_map<int,int> ump;
    ump.insert(make_pair(4,400));
    ump.insert(make_pair(10,700));
    ump.insert(make_pair(3,300));
    ump.insert(make_pair(10,900));
    ump.insert(make_pair(10,1000));

    for(auto it=ump.begin();it!=ump.end();it++)
    {
        cout << it->first <<"-->"<<it->second<<endl;
    }
    //and similarly we have unordered multimap
    unordered_multimap<int ,int> ummp; 
    ummp.insert(make_pair(4,400));
    ummp.insert(make_pair(10,700));
    ummp.insert(make_pair(3,300));
    ummp.insert(make_pair(10,900));
    ummp.insert(make_pair(10,1000));


    for(auto it=ummp.begin();it!=ummp.end();it++)
    {
        cout << it->first <<"-->"<<it->second<<endl;
    }

    return 0;
}