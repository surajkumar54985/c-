#include<bits/stdc++.h>

using namespace std;
int dpfibo(int n , int *ans)
{
    if(n<=1)
    {
        ans[n]=n;
        return n;
    }
    if(ans[n-1]==0)
    {
        ans[n-1]=dpfibo(n-1 , ans);
    }
    if(ans[n-2]==0)
    {
        ans[n-2]=dpfibo(n-2 , ans);
    }
    ans[n]=ans[n-1] + ans[n-2];
    return ans[n];
}
int dpfibo(int n)
{
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++)
    {
        ans[i]=0;
    }
    return dpfibo(n , ans);
}
int main()
{
    cout<<"Enter the required number"<<endl;
    int n;
    cin>>n;
    cout<<dpfibo(n);
}