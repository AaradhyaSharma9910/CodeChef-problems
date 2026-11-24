#include <iostream>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    if (cin >> a >> b) {
        int diff = a - b;
        
        // If the last digit is 9, subtract 1. Otherwise, add 1.
        if (diff % 10 == 9) {
            diff -= 1;
        } else {
            diff += 1;
        }
        
        cout << diff << "\n";
    }

    return 0;
}