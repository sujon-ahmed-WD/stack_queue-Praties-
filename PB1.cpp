#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Mystack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }

        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void pop()
    {
        sz--;
        Node *deletenode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
        delete deletenode;
    }

    int size()
    {
        return sz;
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    Mystack st;
    Mystack st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st2.push(y);
    }
      if(st.size()!=st2.size())
      {
        cout<<"NO"<<endl;
        return 0 ;
      }
    while (!st.empty()&&!st2.empty())
    {
        if (st.top() != st2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        st2.pop();
    }
    cout<<"YES"<<endl;

    return 0;
}