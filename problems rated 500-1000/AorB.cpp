#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b; 
        int c = a + b;
        int x, y;
        x = 500 - (a * 2);
        y = 1000 - (c * 4);
        int z = x + y;
        int xx = 1000 - (b * 4);
        int yy = 500 - (c * 2);
        int zz = xx + yy;
        int k = max(z, zz);
        cout << k << endl;
    }
}