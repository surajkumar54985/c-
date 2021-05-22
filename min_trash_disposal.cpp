#include<bits/stdc++.h>

using namespace std;

int min_trash_disp(int m, int n, int k,int startx, int starty,vector<int> x, vector<int> y,int count)
{
    if(k==0)
    {
        return count;
    }
    int right=min_trash_disp(m,n,k,startx+1,starty,x,y,count+1);
    int left=min_trash_disp(m,n,k,startx-1,starty,x,y,count+1);
    int up=min_trash_disp(m,n,k,startx,starty-1,x,y,count+1);
    int down=min_trash_disp(m,n,k,startx,starty+1,x,y,count+1);
    count=1+min(min_trash_disp(m,n,k,))
}