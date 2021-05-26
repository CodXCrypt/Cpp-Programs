// Cpp Program to check if a number is perfect number
/*a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.*/
#include<iostream>
using namespace std;
int Check_perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)return 1;
    return 0;
}
int main()
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    if(Check_perfect(n))
    cout<<"It is a perfect number";
    else
    cout<<"It is not a perfect number";
}