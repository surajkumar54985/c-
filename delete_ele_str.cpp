#include<bits/stdc++.h>

using namespace std;

    int minDistance(string word1, string word2, int ans)
    {
        if(word1.size()==0 && word2.size()==0)
        {
            return 0;
        }
        if(word1.size()==0 && word2.size()!=0)
        {
            return ans+word2.size();
        }
        if(word2.size()==0 && word1.size()!=0)
        {
            return ans+word1.size();
        }
        if(word1[0]==word2[0])
        {
            ans=0+minDistance(word1.substr(1) , word2.substr(1) , ans);
        }
        else
        {
            ans=min(1+minDistance(word1.substr(1) , word2 ,ans) , 1+minDistance(word1 , word2.substr(1) , ans));
        }
        return ans;
    }

    
    int findans(string word1 , string word2)
    {
        int ans;
        return minDistance(word1,word2,ans);
    }
    

    int main()
    {
        string word1,word2;
        cin>>word1;
        cin>>word2;
        cout<<findans(word1,word2);
        return 0;
    }