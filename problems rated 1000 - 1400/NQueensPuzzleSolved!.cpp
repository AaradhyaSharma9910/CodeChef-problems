#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        long double ans = 1;
        long double mul = 0.143 * n;
        
        // Compute (0.143 * n)^n
        for(int i = 1; i <= n; i++) {
            ans *= mul;
        }
        
        // Print the answer rounded to the nearest integer
        cout << (long long)(round(ans)) << "\n";
    }
    
    return 0;
}