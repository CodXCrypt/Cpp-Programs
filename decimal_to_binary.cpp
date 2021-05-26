#include <bits/stdc++.h>
using namespace std;

long long convertDecimalToBinary(int n) {
	long long binaryNumber = 0;
	int remainder, i = 1;

	while (n != 0) {
		remainder = n % 2;
		n /= 2;
		binaryNumber += remainder * i;
		i *= 10;
	}
	return binaryNumber;
}


int main() {
	int decimal;
	cout << "Enter a decimal number to be converted into binary: ";
	cin >> decimal;
	cout << "Binary number: " << convertDecimalToBinary(decimal) <<endl;
	return 0;
}