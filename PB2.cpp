#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    stack<int>st2;
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
        st2.push(val);
    }

    if(st.size()!=st2.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    while (!st.empty()&&!st2.empty())
    {
        if(st.top()!=st2.top())
        {
            cout<<"NO";
            return 0;
        }
        st.pop();
        st2.pop();
    }
    cout<<"YES"<<endl;
    


    return 0;
}