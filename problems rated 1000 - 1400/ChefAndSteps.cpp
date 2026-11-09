#include <iostream>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        long long d;
        cin >> d;
        // If the distance is divisible by k, Chef can traverse it.
        if (d % k == 0) {
            cout << "1";
        } else {
            cout << "0";
        }
    }
    cout << "\n";
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