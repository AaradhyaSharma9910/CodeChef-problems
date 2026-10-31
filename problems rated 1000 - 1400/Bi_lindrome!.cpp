#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Frequency array for lowercase English alphabets (a-z)
    vector<int> freq(26, 0);
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }

    // Check if any character appears at least twice
    bool has_duplicate = false;
    for (int i = 0; i < 26; i++) {
        if (freq[i] >= 2) {
            has_duplicate = true;
            break;
        }
    }

    // If a duplicate exists, we can form a palindrome of length 2 by deleting n - 2 characters.
    // Otherwise, it's impossible, so we output -1.
    if (has_duplicate) {
        cout << n - 2 << "\n";
    } else {
        cout << -1 << "\n";
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