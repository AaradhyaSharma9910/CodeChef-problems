#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    int N;
    cin >> N;
    
    int originalParity = digitSum(N) % 2;
    
    // Check N + 1
    if (digitSum(N + 1) % 2 != originalParity) {
        cout << N + 1 << "\n";
    } else {
        // If N + 1 has the same parity, the answer is always N + 2
        cout << N + 2 << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}