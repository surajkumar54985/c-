#include<bits/stdc++.h>

using namespace std;

int MinDistance(string word1, string word2)
    {
        if(word1.size()==0 && word2.size()==0)
        {
            return 0;
        }
        
        if(word1.size()==0 && word2.size()!=0)
        {
            return word2.size();
        }
        
        if(word1.size()!=0 && word2.size()==0)
        {
            return word1.size();
        }
        if(word1[0]==word2[0])
        {
            return 0+MinDistance(word1.substr(1) , word2.substr(1));
        }
        else
        {
            int r=1 + MinDistance(word2[0]+word1.substr(1) , word2);
            int i=1 + MinDistance(word2[0]+word1 , word2);
            int d=1 + MinDistance(word1.substr(1) , word2);
            
            return min(r , min(d,i));
        }
        
    }

int solve(string word1, string word2, int **ans)
    {
        int m=word1.size();
        int n=word2.size();
        if(word1.size()==0 || word2.size()==0)
        {
            return max(word1.size(),word2.size());
        }
        if(ans[m][n]!=-1)
        {
            return ans[m][n];
        }
        if(word1[0]==word2[0])
        {
            ans[m][n]=MinDistance(word1.substr(1) , word2.substr(1));
            //ans[m][n]=1+ans[m-1][n-1];
        }
        else
        {
            ans[m][n-1]=MinDistance(word1 , word2.substr(1));
            ans[m-1][n]=MinDistance(word1.substr(1) , word2);
            ans[m-1][n-1]=MinDistance(word1.substr(1) , word2.substr(1));
            ans[m][n]=1 + min(ans[m-1][n-1] , min(ans[m-1][n] , ans[m][n-1]));
        }
        return ans[m][n];
    }



    int minDistance(string word1, string word2)
    {
        int m=word1.size();
        int n=word2.size();
        int **ans=new int*[m+1];
        for(int i=0;i<=m;i++)
        {
            ans[i]=new int[n+1];
            for(int j=0;j<=n;j++)
            {
                ans[i][j]=-1;
            }
        }
        return solve(word1,word2,ans);
    }
    
    

    int main()
    {
        string word1="abcd";
        string word2="dcba";
        cout<<minDistance(word1,word2);
    }