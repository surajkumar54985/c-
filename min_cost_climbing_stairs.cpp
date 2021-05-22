#include<bits/stdc++.h>

using namespace std;

int minCostClimbingStairs(vector<int> cost , int i , int n)
{
    if(i==n-1)
    {
        return 0;
    }
    int ans=cost[i]+min(minCostClimbingStairs(cost,i+1,n) , minCostClimbingStairs(cost,i+2,n));
    return ans;
}

int minCostClimbingStairs(vector<int>& cost) 
{
    int n=cost.size()-1;
    int start;
    if(cost[0]<cost[1])
    {
        start=0;
    }
    else
    {
        start=1;
    }
    return minCostClimbingStairs(cost,start,n);
}

int minCostClimbingStairs_dp(vector<int>& cost) 
    {
        int n=cost.size();
        vector<int> dp(n);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }

int main()
{
    vector<int> cost;
    int n;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        cost.push_back(input);
    }
    cout<<minCostClimbingStairs_dp(cost);
}