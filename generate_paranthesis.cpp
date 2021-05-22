#include<bits/stdc++.h>

using namespace std;
int no_of_comb(int n)
{
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+(dp[i-1]*2)-1;
    }
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    cout<<no_of_comb(n);
    return 0;
}