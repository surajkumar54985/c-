#include<bits/stdc++.h>

using namespace std;
int balancedBts(int h)
{
    if(h<=1)
    {
        return 1;
    }
    int x=balancedBts(h-1);
    int y=balancedBts(h-2);
    int ans=x*x + 2*x*y ;
    return ans;
}
int main()
{
    int h;
    cin>>h;
    cout<<balancedBts(h)<<endl;
}