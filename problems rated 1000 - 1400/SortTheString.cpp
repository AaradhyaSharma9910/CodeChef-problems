#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int operations = 0;
    // Count the occurrences of "10"
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '0') {
            operations++;
        }
    }
    
    cout << operations << "\n";
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