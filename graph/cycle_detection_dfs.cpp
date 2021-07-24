#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int node,int parent,vector<int> &vis,vector<int> adj[])
{
    vis[node]=1;
    for(auto i: adj[node])
    {
        if(vis[i]==0)
        {
            if(checkCycle(i,node,vis,adj)) return true;
        }
        else if(i!=parent) return true;
    }
    return false;
}
bool isCycle(int v,vector<int> adj[])
{
    vector<int> vis(v+1,0);
    for(int i=1;i<=v;i++)
    {
        if(!vis[i])
        {
            if(checkCycle(i,-1,vis,adj)) return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        vector<int> adj[v];
        for(int i=0;i<e;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool ans=isCycle(v,adj);
        cout<<ans<<" ";
    }
    return 0;
}