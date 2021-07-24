#include<bits/stdc++.h>
using namespace std;

string reverse(string s,string ans)
{
    if(s.size()==0)
    {
        return ans;
    }
    //ans=s[0]+ans;
    ans=reverse(s.substr(1),ans)+s[0];
    
    return ans;
}

int main()
{
    string s;
    getline(cin,s);
    string ans;
    ans=reverse(s,ans);
    //cout<<ans.size();
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    return 0;
}