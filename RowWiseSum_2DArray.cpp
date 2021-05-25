#include <bits/stdc++.h>

using namespace std;

int main ()
{

int x,y;

cout << "Enter no. of row - ";       cin >> x;

cout << "Enter no. of columns - ";   cin >> y;



int arr[x][y];


cout << "Enter elements  - " << endl;


for (int i = 0; i < x; i++) {
for (int j = 0; j < y; j++)	{

cin >> arr[i][j];

}
cout << "\n";

}



cout << "\n  - Sum of each row - \n\n";


for (int i = 0; i < x; ++i) {

int sum = 0;

for (int j = 0; j < y; ++j) {


sum = sum + arr[i][j];	// sum of rows

	}

cout << "Sum of row " << i << " = " << sum << endl;


}


return 0;

}
