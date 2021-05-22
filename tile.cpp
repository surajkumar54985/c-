#include<bits/stdc++.h>

using namespace std;

int no_ways(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return no_ways(n-1) + no_ways(n-2);
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<no_ways(n);
    return 0;
}