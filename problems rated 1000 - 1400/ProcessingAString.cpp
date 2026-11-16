#include <bits/stdc++.h>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    while(t--) {
        string s; 
        cin >> s;
        
        int sum = 0;
        for (char c : s) {
            // Check if the character is a digit
            if (isdigit(c)) {
                // Convert character to integer and add to sum
                sum += (c - '0');
            }
        }
        
        cout << sum << "\n";
    }
    
    return 0;
}