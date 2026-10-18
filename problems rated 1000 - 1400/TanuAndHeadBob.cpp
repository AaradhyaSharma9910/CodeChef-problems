#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    bool has_I = false;
    bool has_Y = false;
    
    for (char c : s) {
        if (c == 'I') {
            has_I = true;
        } else if (c == 'Y') {
            has_Y = true;
        }
    }
    
    if (has_I) {
        cout << "INDIAN\n";
    } else if (has_Y) {
        cout << "NOT INDIAN\n";
    } else {
        cout << "NOT SURE\n";
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