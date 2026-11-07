#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s, r;
    cin >> s >> r;

    int count_ones_s = 0;
    int count_ones_r = 0;

    // Count the number of '1's in both strings
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') count_ones_s++;
        if (r[i] == '1') count_ones_r++;
    }

    // If the number of '1's is equal, the number of '0's must also be equal
    if (count_ones_s == count_ones_r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}