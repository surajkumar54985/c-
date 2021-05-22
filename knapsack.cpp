#include<bits/stdc++.h>

using namespace std;

int knapsack(int *weight , int *val , int n , int max_weight)
{
    if(n==0 || max_weight==0)
    {
        return 0;
    }

    if(weight[0]>max_weight)
    {
        return knapsack(weight+1,val+1,n-1,max_weight);
    }
    int x=val[0]+knapsack(weight+1,val+1,n-1,max_weight-weight[0]);
    int y=knapsack(weight+1,val+1,n-1,max_weight);
    int ans=max(x,y);
    return ans;
}

int knapsack_better(int *weight , int *val , int n , int max_weight , int *dp)
{
    if(i==n-1)
    {
        return dp[i];
    }
    for(int i=0;i<n;i++)
    {
        dp[i]=
    }
}

int main()
{
    int n,w;
    cin>>n>>w;
    int *weight=new int[n];
    int *val=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    cout<<knapsack(weight,val,n,w);
}