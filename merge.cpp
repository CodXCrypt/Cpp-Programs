#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int b[n1];
    int c[n2];
    for(int i=0;i<n1;i++)
    {
    b[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
    c[i]=a[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 &&j<n2)
    {
        if(b[i]<c[j])
        {
        a[k]=b[i];
        k++;
        i++;
        }
        else
        {
            a[k]=c[j];
            k++;
            j++;

                
            
        }
        


    }
    while(i<n1)
    {
      a[k]=b[i];
        k++;
        i++;  
    }
    while(j<n2)
    {
            a[k]=c[j];
            k++;
            j++;   
    }

}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
    int mid =(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    
    merge(a,l,mid,r);
    }


}
int main()
{
    int a[]={5,4,3,2,1};
    mergesort(a,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    return 0;

}