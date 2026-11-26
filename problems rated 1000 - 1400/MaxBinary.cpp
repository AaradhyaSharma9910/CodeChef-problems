#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // If the first character is '0', change it to '1' using 1 operation
    if (s[0] == '0') {
        s[0] = '1';
        k--;
    }

    // Append '0' to the end for all remaining operations
    for (int i = 0; i < k; i++) {
        s += '0';
    }

    cout << s << "\n";
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