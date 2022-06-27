#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "([)]";
    stack<char> st;
    bool flag = false;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
            cout << st.top();
            flag = false;
        }
        else if (s[i] == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
            flag = true;
        }
        else if (s[i] == ']' && !st.empty() && st.top() == '[')
        {
            st.pop();
            flag = true;
        }
        else if (s[i] == '}' && !st.empty() && st.top() == '{')
        {
            st.pop();
            flag = true;
        }
        else
        {
            flag = false;
        }
    }

    cout << flag;

    return 0;
}