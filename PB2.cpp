#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
   queue<int>que;
    int n;cin>>n;
    for(int i=0; i<n; i++)
    {
        int val;cin>>val;
        st.push(val);
    }
    int m;cin>>m;
    for(int i=0; i<m; i++)
    {
        int val;cin>>val;
        que.push(val);
    }

    if(st.size()!=que.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    while (!st.empty()&&!que.empty())
    {
        if(st.top()!=que.front())
        {
            cout<<"NO";
            return 0;
        }
        st.pop();
        que.pop();
    }
    cout<<"YES"<<endl;
    


    return 0;
}