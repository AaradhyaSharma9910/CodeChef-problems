#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        long long stored = 0;
        int ans = -1;
        
        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;
            
            stored += a; // Add protein bought today
            
            if (stored < k && ans == -1) {
                ans = i; // Store the first day Chef fails
            }
            
            stored -= k; // Eat dinner
        }
        
        if (ans != -1) {
            cout << "NO " << ans << "\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}