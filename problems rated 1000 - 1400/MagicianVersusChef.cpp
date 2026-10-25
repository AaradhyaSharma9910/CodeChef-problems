#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, s;
        cin >> n >> x >> s;
        
        int coin = x; // coin stores the current box number where the coin is
        
        for (int i = 0; i < s; i++) {
            int a, b;
            cin >> a >> b;
            
            // If the coin is in box 'a', it moves to box 'b'
            if (coin == a) {
                coin = b;
            } 
            // If the coin is in box 'b', it moves to box 'a'
            else if (coin == b) {
                coin = a;
            }
        }
        
        cout << coin << endl;
    }
    
    return 0;
}