#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int n0 = 0, n1 = 0;
    for (char c : s) {
        if (c == '0') n0++;
        else n1++;
    }

    int ans = 2 * min(n0, n1);
    if (n0 != n1) {
        ans += 1;
    }

    cout << ans << "\n";
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