#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>que;
    stack<int>st;
    queue<int>qu2;
    int n;cin>>n;
    for(int i=0; i<n; i++)
    {
        int v;cin>>v;
        que.push(v);
    }
    while (!que.empty())
    {
         st.push(que.front());
         que.pop();
    }

    while (!st.empty())
    {
         qu2.push(st.top());
         st.pop();
    }
    while (!qu2.empty())
    {
         cout<<qu2.front()<<" ";
         qu2.pop();
    }
    
    
    return 0;
}