#include <iostream>
using namespace std;
int main(){
    int yr;
    cin>>yr;
    if(yr%4==0 && yr%100==0){
        if(yr%400==0)
            cout<<"Leap Year";
        else cout<<"Not leap year";
    }
    if(yr%4==0 && yr%100!=0){
        cout<<"Leap Year";
    }
    return 0;
}
