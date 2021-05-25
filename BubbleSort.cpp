#include <iostream>

using namespace std;

int main()
{
    int arr[10]={10,30,20,50,40,60,90,70,100,80};
    
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
