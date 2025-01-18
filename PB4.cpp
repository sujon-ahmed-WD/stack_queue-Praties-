#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>que;
    queue<int>qu2;
    int n;cin>>n;
    for(int i=0; i<n; i++)
    {
        int v;cin>>v;
        que.push(v);
    }
    while (!que.empty())
    {
         qu2.push(que.back());
         que.pop();
    }

    while (!qu2.empty())
    {
        cout<<qu2.front()<<" ";
        qu2.pop();
    }
    
    
    return 0;
}