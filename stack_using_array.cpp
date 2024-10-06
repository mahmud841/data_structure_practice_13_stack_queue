#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack jft;
    // jft.push(10);
    // jft.push(20);
    // cout << jft.top() << endl;
    // jft.pop();
    // cout << jft.top() << endl;
    // if (jft.empty() == false)
    // {
    //     cout << jft.top() << endl;
    // }

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        jft.push(x);
    }
    // while(jft.empty() ==false)
    // while(jft.empty() ==false)
    while (!jft.empty())
    {
        cout << jft.top() << endl;
        jft.pop();
    }
    return 0;
}