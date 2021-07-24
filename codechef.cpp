#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    
	    if(n==k)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        int count=0;
	        for(int i=0;i<n-k-1;i++)
	        {
	            if(a[i]!=a[k+i])
	            {
	                count++;
	                a[k+i]=a[i];
	            }
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}
