#include <iostream>

using namespace std;

// Function to calculate the sum of digits of a number
int getDigitSum(long long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve() {
    int N;
    cin >> N;
    
    int chef_points = 0;
    int morty_points = 0;
    
    for (int i = 0; i < N; i++) {
        long long A, B;
        cin >> A >> B;
        
        int powerA = getDigitSum(A);
        int powerB = getDigitSum(B);
        
        if (powerA > powerB) {
            chef_points++;
        } else if (powerB > powerA) {
            morty_points++;
        } else {
            // Both get 1 point if powers are equal
            chef_points++;
            morty_points++;
        }
    }
    
    // Determine the winner
    if (chef_points > morty_points) {
        cout << 0 << " " << chef_points << "\n";
    } else if (morty_points > chef_points) {
        cout << 1 << " " << morty_points << "\n";
    } else {
        // Draw case, output either player's points
        cout << 2 << " " << chef_points << "\n";
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