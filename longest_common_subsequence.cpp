#include<bits/stdc++.h>

using namespace std;


int solve(string text1, string text2, int **ans)
{
    if(text1.size()==0 || text2.size()==0)
    {
        return 0;
    }
    int m=text1.size();
    int n=text2.size();
    if(ans[m][n]!=-1)
    {
        return ans[m][n];
    }
        
    if(text1[0]==text2[0])
    {
        ans[m-1][n-1]=solve(text1.substr(1),text2.substr(),ans);
        ans[m][n]=1+ans[m-1][n-1];
    }
    else
    {
        ans[m-1][n]=solve(text1.substr(1),text2,ans);
        ans[m][n-1]=solve(text1,text2.substr(1),ans);
        ans[m][n]=max(ans[m-1][n],ans[m][n-1]);
    }
    return ans[m][n];
}

int longestCommonSubsequence(string text1, string text2)
    {
        int m=text1.size(),n=text2.size();
        int **ans=new int*[m+1];
        for(int i=0;i<=m;i++)
        {
            ans[i]=new int[n+1];
            for(int j=0;j<=n;j++)
            {
                ans[i][j]=-1;
            }
        }
        return solve(text1,text2,ans);
    }
    

    int main()
    {
        string text1,text2;
        text1="bsbininm";
        text2="jmjkbkjkv";
        cout<<longestCommonSubsequence(text1,text2);
    }