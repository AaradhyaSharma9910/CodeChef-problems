#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    int max_freq = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
    }
    
    // Minimum operations = Total elements - Frequency of the most frequent element
    cout << n - max_freq << "\n";
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