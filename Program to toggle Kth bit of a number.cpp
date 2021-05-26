#include <iostream>
using namespace std;

// K starts from 1
// left shift 1 K-1 times and xor with number n
// 1<<K-1 generates a mask in which only Kth bit is set.

int ToggleKthBit(int n,int K)
{                           
	return n ^ (1 << (K-1)); //toggled number
}

//driver program to check the code
int main() 
{
	int num,k;
	
	cout<<"Enter number: ";
	cin>>num;
	cout<<"Enter bit to toggle (value of k): ";
	cin>>k;

	cout<<"Enter number: "<<num<<endl;
	cout<<"Enter k: "<<k<<endl;

	cout<<"original number before toggling: "<<num<<endl;

	int new_number= ToggleKthBit(num,k);

	cout<<"new number after toggling: "<<new_number<<endl;
	
	return 0;
}
