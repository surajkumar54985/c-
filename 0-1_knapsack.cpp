#include<bits/stdc++.h>

using namespace std;

int solve(int n, int w[], int val[], int k)
{
    if(n==0 || k==0)
    {
        return 0;
    }
    if(w[n-1]>k)
    {
        return solve(n-1,w,val,k);
    }
    return max(solve(n-1,w,val,k) , solve(n-1,w,val,k-w[n-1])+val[n-1]);
}

int main()
{
    int n , k;
    cin>>n>>k;
    int w[n],val[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }

    cout<<solve(n,w,val,k);
    return 0;
}