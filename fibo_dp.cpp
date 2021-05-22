#include<bits/stdc++.h>

using namespace std;
int fibo(int n, vector<int> ans)
{
    ans.push_back(0);
    ans.push_back(1);
    for(int i=2;i<=n;i++)
    {
        ans.push_back(ans[i-1]+ans[i-2]);
    }
    return ans[n];
}
int main()
{
    cout<<"enter req number";
    int n;
    cin>>n;
    vector<int> vec;
    cout<<fibo(n,vec);
}