#include <bits/stdc++.h>
using namespace std;

int* solve(int n , int* a , int* dp)
{
    dp[0]=0;
    int last=0;
    int first=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            dp[i]=0;
            first=i;
            last=i;
        }
        else if(a[i]==2)
        {
            dp[i]=0;
            int j=i-1;
            while(j>=last)
            {
                dp[j]=min(dp[j],(i-j));
                j--;
            }
            last=i;
        }
        else
        {
            int j=i-1;
            bool boo=false;
            while(j>=first)
            {
                if(a[j]!=1)
                {
                    continue;
                }
                else if(a[j]==1)
                {
                    boo=true;
                    break;
                }
                j--;
            }
            if(boo)
            {
                dp[i]=dp[i-1]+1;
            }
            else
            {
                dp[i]=-1;
            }
            
        }
    }
    return dp;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int* a=new int[n];
        int* b=new int[m];
        int* dp=new int[n];
        for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    solve(n,a,dp);
	   // for(int i=0;i<m;i++)
	   // {
	   //     int target = b[i];
	   //     cout<<dp[target-1]<<" ";
	   // }
	   for(int i=0;i<n;i++)
	   {
	       cout<<dp[i]<<" ";
	   }
	    cout<<endl;
    }
    
	return 0;
}