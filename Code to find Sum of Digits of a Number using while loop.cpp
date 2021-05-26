/*  C++ Program to find Sum of Digits of a Number using while loop  */

#include<iostream>
using namespace std;

int main()
{
    long int a,num,no,sum=0;
    
    //----Enter any number which u want --------
    cout<<"Enter any integer :: ";
    cin>>num;

    no=num;

    while(no>0)
    {
        a=no%10;
        no=no/10;
        sum=sum+a;
    }
    
    cout<<"\nSum of Digits of a Number [ "<<num<<" ] :: "<<sum<<"\n";

    return 0;
}
