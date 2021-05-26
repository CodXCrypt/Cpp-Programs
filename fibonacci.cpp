#include <iostream>
using namespace std;
int fib(int N){
    int a=0,b=1;
    int sum=0;
    cout<<a<<"\t"<<b<<"\t";
    for(int i=0;i<N;i++){
        sum=a+b;
        cout<<sum<<"\t";
        a=b;
        b=sum;
    }
}
int main(){
    int n;
    cin>>n;
    fib(n-2);
    return 0;
}
