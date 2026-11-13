#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    if (n == 2 || n == 3) {
        cout << n - 1 << "\n";
    } else {
        cout << n << "\n";
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