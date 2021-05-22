#include<bits/stdc++.h>

using namespace std;

int min_cost_path(vector<vector<int>> vec , int m, int n, int i, int j)
{
    if(i==m-1 && j==n-1)
    {
        return 0;
    }
    if(i>=m && j>=n)
    {
        return INT_MAX;
    }
    int x=min_cost_path(vec ,m,n,i+1,j);
    int y=min_cost_path(vec , m , n , i+1 , j+1);
    int z=min_cost_path(vec , m , n, i , j+1);
    int ans=min(x,min(y,z)) + vec[i][j];
    return ans;
}

int min_cost_path(vector<vector<int>> vec ,int m, int n)
{
    return min_cost_path(vec , m , n , 0 , 0);
}


int main()
{
    vector<vector<int>> vec;
    int m , n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        vector<int> ele;
        for(int j=0;j<n;j++)
        {
            int input;
            cin>>input;
            ele.push_back(input);
        }
        vec.push_back(ele);
        ele.clear();
    }
    return min_cost_path(vec,m,n);
}
