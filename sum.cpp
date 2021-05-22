#include<bits/stdc++.h>

using namespace std;

vector<string> groupTransactions(vector<string> transactions){
    map <string, int> cnt;
    for(auto x: transactions) cnt[x]++;
    vector <pair<int, string>> v;
    for(auto x: cnt) v.push_back({-x.second, x.first});
    sort(v.begin(), v.end());
    vector <string> ans;
    for(auto x: v) {
        string y = x.second + " " + to_string(-x.first);
        ans.push_back(y);
    }
    return ans;
}

int main()
{
    //int n;
    vector<string> transactions={"notebook","notebook","keyboard","mouse","mouse"};

    vector<string> ans=groupTransactions(transactions);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    /*vector<int> s;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        s.push_back(input);
    }
    
    //cout<<lastLetters(word);
    
    //cout<<countHighlyProfitableMonths(s,k);*/
    return 0;
}