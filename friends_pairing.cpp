#include<bits/stdc++.h>

using namespace std;

int friends_pairing(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 2;
    }

    return friends_pairing(n-1)+(n-1)*friends_pairing(n-2);
}

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<friends_pairing(n)<<endl;
    return 0;
}