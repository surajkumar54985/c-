#include<bits/stdc++.h>

using namespace std;
int minsq(int n ,int t ,int min)
{
    if(n==t*t)
    {
        return 0;
    }
    for(int i=1;i<=t;i++)
    {
        int s=pow(i,2);
        int x = 1 + minsq(n-s ,t ,min);
        if(x<min)
        {
            min=x;
        }
    }
    return min;
}

int main()
{
    int n;
    int min=INT_MAX;
    int t=sqrt(n);
    cin>>n;
    cout<<minsq(n,t,min);
}
