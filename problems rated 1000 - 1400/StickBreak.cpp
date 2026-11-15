#include <iostream>

using namespace std;

void solve() {
    long long L, K;
    cin >> L >> K;
    
    // If L is divisible by K, the minimum sum of differences is 0.
    // Otherwise, it is always 1.
    if (L % K == 0) {
        cout << 0 << "\n";
    } else {
        cout << 1 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}