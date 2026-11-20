#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a[3];
        // Read the three minimum values
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        
        // Sort the array
        sort(a, a + 3);
        
        // If the two smallest minimums are equal, a valid tuple exists
        if (a[0] == a[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}