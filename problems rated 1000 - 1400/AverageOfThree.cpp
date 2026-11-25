#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    // Output three distinct numbers whose mean is x
    cout << x - 1 << " " << x << " " << x + 1 << "\n";
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