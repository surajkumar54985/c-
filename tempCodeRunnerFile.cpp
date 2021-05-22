#include<bits/stdc++.h>

using namespace std;

int calculate(int m , int n , int i , int j)
{   
    if(i==m-1 && j==n-1)
    {
        return 0;
    }
    if(i==m-1 && j<n-1)
    {
        return calculate(m,n,i,j+1);
    }
    if(i<m-1 && j==n-1)
    {
        return calculate(m,n,i+1,j);
    }
    return 1+calculate(m,n,i+1,j)+calculate(m,n,i,j+1);
}

int uniquePaths(int m, int n) 
{
    return 1+calculate(m,n,0,0);
}


int main()
{
    int m,n;
    cin>>m>>n;
    cout<<uniquePaths(m,n);
    return 0;
}