#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int k;
    cin >> k;
    
    // Save the length of "Uncle Johny" (convert K from 1-based to 0-based index)
    long long uncleJohny = a[k - 1];
    
    // Sort the playlist
    sort(a.begin(), a.end());
    
    // Find the new position of "Uncle Johny"
    for (int i = 0; i < n; i++) {
        if (a[i] == uncleJohny) {
            // Print 1-based index
            cout << i + 1 << "\n";
            break;
        }
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