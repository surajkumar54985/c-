#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int limit=pow(10,x);
    long long int res=(int) pow(2,limit)%(1000000007);
    cout<<res%1000000007;
    return 0;
}