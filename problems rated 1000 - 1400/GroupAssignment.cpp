#include <bits/stdc++.h>

using namespace std;

int main() {
    // Fast I/O
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Frequency array to store the count of people preferring each group size
        vector<int> count(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            int p;
            cin >> p;
            count[p]++;
        }

        bool possible = true;
        // Check if the number of people for each preference is a multiple of that preference
        for (int i = 2; i <= n; ++i) {
            if (count[i] % i != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}