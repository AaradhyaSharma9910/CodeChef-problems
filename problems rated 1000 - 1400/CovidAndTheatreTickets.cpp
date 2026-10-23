#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    // Calculate the maximum number of rows and seats we can occupy
    int rows = (n + 1) / 2;
    int seats = (m + 1) / 2;
    
    // Total tickets sold is the product of occupied rows and occupied seats per row
    int ans = rows * seats;
    
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