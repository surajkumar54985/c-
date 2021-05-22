#include<bits/stdc++.h>

using namespace std;
void allsubstr(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    allsubstr(s.substr(1),ans);
    allsubstr(s.substr(1),ans+ch);
}

int main()
{
    string s,ans;
    cin>>s;
    allsubstr(s,ans);
    return 0;
}