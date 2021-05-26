#include <iostream>
using namespace std;
int bin_search(int a[],int n,int num){
    int first=0,last=n-1;
    int flag=0;
    while(first<=last){
        int mid=(first+last)/2;
        if(a[mid]<num)
            first=mid+1;
        else if(a[mid]>num)
            last=mid-1;
        else{
            flag=1;
            return flag;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int num;
    cin>>num;
    int flag=bin_search(a,n,num);
    if(flag==1)
        cout<<"Found";
    else cout<<"Not Found";
    return 0;
}
