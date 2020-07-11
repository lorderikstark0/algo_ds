//stack,queue and pririty quese 
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
using namespace std;
int main()
{
    stack<int> cstk;//use inbuilt deque as in built 
    cstk.push(100);
    cstk.push(200);
    cstk.push(300);
    cstk.push(400);
    while(!cstk.empty())
    {
        cout <<cstk.top()<<endl;
        cstk.pop();
    }
     
     //make stack use vector or  linked list data structure
    //queue can also use linked list or deque 
   // queue<int> qu;
  //  qu.push(100);
   // qu.push(200);
   // qu.push(300);
   // qu.push(400);
   // qu.push(500);
 /*
    while(!qu.empty())
    {
        
        cout << qu.front() <<endl;
        cout <<qu.back() <<endl;
    }
   */ 
    //priority queue 
    //can see only top of the ds .. only in descendiing order --prioirty queue 
    priority_queue<int> q1; //can use deque and vector 
    q1.push(300);
    q1.push(200);
    q1.push(100);
    q1.push(500);


    while(!q1.empty())
    {   
        cout << q1.top() <<endl;
       
    }

    return 0;
}