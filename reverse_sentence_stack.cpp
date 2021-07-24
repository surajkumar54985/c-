#include<bits/stdc++.h>
#include<stack>

using namespace std;



stack<string> reverseSentence(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word=word+s[i];
            i++;
        }
        st.push(word);
    }

    return st;

    /*while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;*/
}


int main()
{
    string s="Hey, how are u doing?";
    //getline(cin,s);
    stack<string> st;

    st=reverseSentence(s);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}