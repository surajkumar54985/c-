#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    int n2,s;
    cin>>n2;
    cin>>s;
    int num=0,count=s,ans;
    for(int i=0;i<n;i++)
    {
        if(count==0 && num!=1)
        {
            num=0;
            break;
        }
        if(count==0 && num==1)
        {
            count=s;
            num=0;
        }
        if(vec[i]==n2)
        {
            num=1;
        }
        count--;
    }
    if(num==1)
    {
        ans=1;
    }
    else
    {
        ans=0;
    }
    cout<<ans;
    return 0;
}