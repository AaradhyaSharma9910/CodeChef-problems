#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x, y;
    cin >> n >> x >> y;
    
    // Row + Column attacks = 2 * (N - 1)
    // Diagonal 1 = N - |X - Y| - 1
    // Diagonal 2 = N - |N + 1 - (X + Y)| - 1
    long long ans = 2 * (n - 1) + (n - abs(x - y) - 1) + (n - abs(n + 1 - (x + y)) - 1);
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}