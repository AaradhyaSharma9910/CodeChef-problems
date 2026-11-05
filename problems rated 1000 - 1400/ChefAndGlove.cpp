#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> l(n), g(n);
    
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    
    bool front = true;
    bool back = true;
    
    // Check front condition
    for (int i = 0; i < n; i++) {
        if (l[i] > g[i]) {
            front = false;
            break;
        }
    }
    
    // Check back condition
    for (int i = 0; i < n; i++) {
        if (l[i] > g[n - 1 - i]) {
            back = false;
            break;
        }
    }
    
    // Determine the output
    if (front && back) {
        cout << "both\n";
    } else if (front) {
        cout << "front\n";
    } else if (back) {
        cout << "back\n";
    } else {
        cout << "none\n";
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