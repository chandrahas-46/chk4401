#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        stack<char>st;
        char str[1000];
        int l,i;
        cin>>str;
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            if(str[i]=='('||str[i]=='{'||str[i]=='[')
                st.push(str[i]);
            else if(!st.empty()&&str[i]==')'&&st.top()=='(')
                st.pop();
            else if(!st.empty()&&str[i]=='}'&&st.top()=='{')
                st.pop();
            else if(!st.empty()&&str[i]==']'&&st.top()=='[')
                st.pop();
            else    st.push(str[i]);
        }
        if(st.empty()) 
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}

