#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
//v.erase() --costly function
vector<int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(40);
v.push_back(60);
v.push_back(70);

cout << "Array size before remove :" <<v.size() <<endl;
//v.erase(v.begin()+3 ,v.begin()+4);
//v.erase(v.begin()+3 ,v.end()-1);

for(auto &val :v){
    cout <<"Vector val is :"<<val << endl;
}


//std::remove() method --it rearranges such that it remove sthing such that shifts that to
//last poition 

v.erase(std::remove(v.begin(),v.end(),40));

cout <<"Array size after remove: "<<v.size()<<endl;
for(auto &val :v){
    cout <<"Vector val is :"<<val << endl;
}

return 0;
}