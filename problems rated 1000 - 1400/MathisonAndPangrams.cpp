#include <bits/stdc++.h>
using namespace std;

void solve() {
    // Array to store the cost of each letter from 'a' to 'z'
    vector<long long> cost(26);
    for (int i = 0; i < 26; i++) {
        cin >> cost[i];
    }
    
    string s;
    cin >> s;
    
    // Boolean array to keep track of characters present in the string
    vector<bool> present(26, false);
    for (char c : s) {
        present[c - 'a'] = true;
    }
    
    long long total_cost = 0;
    // Iterate through all letters and add the cost of missing ones
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            total_cost += cost[i];
        }
    }
    
    cout << total_cost << "\n";
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