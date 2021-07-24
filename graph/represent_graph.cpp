#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define vii vector<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD = 1e9+7;

//representation of graphs

signed main()
{
    int n,m;
    cin>>n>>m;

    vvi adjm(n+1,vi(n+1,0));

    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    cout<<"adjacency matrix of above graph is given by:"<<endl;

    rep(i,1,n+1)
    {
        rep(j,1,n+1)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"adjacency list of the given graph is:"<<endl;
    rep(i,1,n+1)
    {
        cout<<i<<" -> ";
        rep(j,1,n+1)
        {
            if(adjm[i][j]==1)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}