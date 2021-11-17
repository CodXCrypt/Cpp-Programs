#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int save=num;
    int sum=0;
    while(num!=0){
        int t=num%10;
        sum=10*sum+t;
        num/=10;
    }
    if(save==sum)
        cout<<"Palindrome";
    else cout<<"Not Palindrome";
    return 0;
}
