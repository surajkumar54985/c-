#include<bits/stdc++.h>

using namespace std;
int dp_balancedBts(int h)
{
    if(h<=1)
    {
        //ans[h]=1;
        return 1;
    }
    int mod = (int) (pow(10,9)) + 7;
    int x = dp_balancedBts(h-1);
    int y = dp_balancedBts(h-2);
    
    int temp1 = (int) (((long)(x)*x) % mod);
    int temp2 = (int) ((2*(long)(x)*y) % mod);
    int ans = (temp1 + temp2) % mod;
    return ans;
}
/*int dp_balancedBts(int h)
{
    int *ans=new int[h+1];

}*/
int main()
{
    int h;
    cin>>h;
    cout<< dp_balancedBts(h);
}