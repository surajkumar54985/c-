#include<bits/stdc++.h>

using namespace std;


void merge(int nums[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
        
    int a[n1];
    int b[n2];
        
    for(int i=0;i<n1;i++)
    {
        a[i]=nums[l+i];
            
    }
        
        for(int i=0;i<n1;i++)
        {
            b[i]=nums[mid+1+i];
            
        }
        
        int i=0;
        int j=0;
        int k=l;
        while(i<n1 && j<n2)
        {
            if(a[i]<b[j])
            {
                nums[k]=a[i];
                k++;
                i++;
            }
            
            else
            {
                nums[k]=b[j];
                k++;
                j++;
            }
        }
        
        while(i<n1)
        {
            nums[k]=a[i];
            k++;
            i++;
        }
        
        while(j<n2)
        {
            nums[k]=b[j];
            k++;
            j++;
        }
        
    }
    void merge_sort(int nums[],int l,int r)
    {
        
        if(l<r)
        {
            int mid=(l+r)/2;
            merge_sort(nums,l,mid);
            merge_sort(nums,mid+1,r);
            
            merge(nums,l,mid,r);
        }
    }

    int main()
    {
        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
        }
        cout<<endl;

        merge_sort(nums,0,n-1);

        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        return 0;
    }