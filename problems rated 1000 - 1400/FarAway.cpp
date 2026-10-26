#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long m, ans = 0, a;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        ans += max(a - 1, m - a);
    }
    
    cout << ans << "\n";
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