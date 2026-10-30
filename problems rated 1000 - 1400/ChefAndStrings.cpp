#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    long long total_skipped = 0;
    for (int i = 0; i < n - 1; i++) {
        // Number of strings skipped between s[i] and s[i+1]
        total_skipped += abs(s[i+1] - s[i]) - 1;
    }
    
    cout << total_skipped << "\n";
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