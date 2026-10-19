#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Greedily swap the first pair that violates the non-decreasing order
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            swap(a[i], a[i + 1]);
            break; // Only one swap is allowed
        }
    }
    
    // Check if the array is now sorted
    if (is_sorted(a.begin(), a.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}