#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // If the total number of animals is odd, they cannot be split equally.
    if (n % 2 != 0) {
        // Read the rest of the inputs to clear the buffer
        int temp;
        for (int i = 0; i < n; i++) cin >> temp;
        cout << "NO\n";
        return;
    }
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        freq[a]++;
    }
    
    // Check if every animal type has an even frequency
    for (auto& pair : freq) {
        if (pair.second % 2 != 0) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
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