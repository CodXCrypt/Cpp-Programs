#include<bits/stdc++.h>
using namespace std;
int get_max(int a[], int n) {
    int maxm=INT_MIN;
    for (int i = 0; i < n; i++) {
        maxm = max(maxm, a[i]);
    }
    for(int i=0;i<n;i++){
        if(maxm==a[i])
        return i;
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cout << "which largest element:";
    cin >> k;
    for (int i = 1; i <= k - 1; i++) {
        int t = get_max(a, n);
        a[t]=INT_MIN;
    }
    int maxm = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxm = max(maxm, a[i]);
    }
    cout << endl;
    cout << maxm;
}
