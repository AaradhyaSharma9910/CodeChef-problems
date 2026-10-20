#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool primeGen(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    bool first = true;
    while (t--) {
        long long m, n;
        cin >> m >> n;

        // Separate answers for each test case by an empty line
        if (!first) {
            cout << "\n";
        }
        first = false;

        // Check every number in the range [m, n]
        for (long long i = m; i <= n; i++) {
            if (primeGen(i)) {
                cout << i << "\n";
            }
        }
    }

    return 0;
}