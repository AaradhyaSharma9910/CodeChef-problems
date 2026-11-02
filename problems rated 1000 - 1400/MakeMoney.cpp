#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long x, c;
    cin >> n >> x >> c;
    
    vector<long long> a(n);
    long long total_coins = 0;
    long long total_cost = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // For each bag, we check if updating it to X is profitable.
        // Updating is profitable if the net gain (X - C) is strictly greater than the current coins (A[i]).
        if (x - c > a[i]) {
            total_coins += x;
            total_cost += c;
        } else {
            total_coins += a[i];
        }
    }
    
    // The final answer is (Sum of A_i after operations) - (Total cost)
    // Which simplifies to: total_coins - total_cost
    cout << total_coins - total_cost << "\n";
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