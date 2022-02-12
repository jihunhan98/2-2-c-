#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for(int i=0; i<t; i++)
    {
        stack<char>st;
        
        string str;
        int cnt = 0;
        cin >> str;
        
        for(int i=0; i<str.size(); i++)
            st.push(str[i]);
        
        for(int i=0; i<str.size(); i++)
        {
            if(st.top() == ')')
                cnt++;
            else if(st.top() == '(')
            {
                if(cnt == 0)
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                    cnt--;
            }
            st.pop();
        }
        
        if(st.empty() && cnt > 0)
            cout << "NO" << endl;
        else if(st.empty() && cnt == 0)
            cout << "YES" << endl;
    }
    
    return 0;
}
