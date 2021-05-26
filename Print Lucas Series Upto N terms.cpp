/*The Lucas series is an integer series very similar to the Fibonacci series, named after the French mathematician François Édouard Anatole Lucas. Each term of the Lucas series is defined as the sum of the previous two terms of the series with the first two terms being 2 and 1 respectively. The Lucas series and Fibonacci series are complementary to each other. Given below is the code to find the Terms of the Lucas series up to n iterations.*/
/*Program to print the Lucas series for n terms.*/

#include <iostream>
using namespace std;

int main()
{
	int n, i, t1 = 2, t2 = 1, tn;
	cout << "Enter the number of terms desired in the lucas series: ";
	cin >> n;
	
	if (n == 1)
		cout << endl << 2 << endl;
	else if (n == 2)
		cout << endl << 2 << endl << 1 << endl;
	else if (n > 2)
	{
		cout <<endl<<"Lucas series for "<< n<< " terms is:"<<endl<< t1 << endl << t2 << endl;
		for (i = 0; i < n-2; i++)
		{
			tn = t1 + t2;
			cout << tn << endl;
			t1 = t2;
			t2 = tn;

		}
	}

	return 0;
}
