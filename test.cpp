#include<bits/stdc++.h>

using namespace std;
int fun(int n)
{
    int ans=n*(n+1);
    return ans;
    //return 0;
}
int main()
{
    cout<<"Enter the required number";
    int n;
    cin>>n;
    cout<<fun(n);
}