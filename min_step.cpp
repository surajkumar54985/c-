#include<bits/stdc++.h>

using namespace std;
int minstep(int n)
{
    if(n==1)
    {
        return 0;
    }
    int x=minstep(n-1);
    int y=INT_MAX , z=INT_MAX;
    if(n%2==0)
    {
        y=minstep(n/2);
    }
    if(n%3==0)
    {
        z=minstep(n/3);
    }
    return min(x,min(y,z))+1;
}

int minstep_dp(int n , int *ans)
{
    if(n==1)
    {
        ans[n] = 0;
        return 0;
    }
    if(ans[n-1]== -1)
    {
        ans[n-1]=minstep_dp(n-1 , ans);
    }
    int y=INT_MAX , z=INT_MAX;
    if(n%2==0)
    {
        if(ans[n/2]==-1)
        {
            ans[n/2]=minstep_dp(n/2 , ans);
        }
        y=ans[n/2];
    }
    if(n%3==0)
    {
        if(ans[n/3]==-1)
        {
            ans[n/3]=minstep_dp(n/3 , ans);
        }
        z=ans[n/3];
    }
    
    ans[n]=1 + min(ans[n-1] , min(y , z));
    return ans[n];
}

int minstep_dp(int n)
{
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        ans[i]= -1;
    }
    return minstep_dp(n , ans);
}

int main()
{
    //cout<<"enter a number";
    int n;
    cin>>n;
    //cout<<minstep(n)<<endl;
    cout<<minstep_dp(n);
}
