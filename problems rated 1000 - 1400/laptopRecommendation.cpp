#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    
    // Frequency array to store recommendations for laptops 1 to 10
    int freq[11] = {0};
    
    for (int i = 0; i < N; i++) {
        int laptop;
        cin >> laptop;
        freq[laptop]++;
    }
    
    int max_freq = 0;
    int best_laptop = -1;
    bool confused = false;
    
    // Find the laptop with the maximum recommendations
    for (int i = 1; i <= 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            best_laptop = i;
            confused = false; // Reset since we found a new strict maximum
        } else if (freq[i] == max_freq && max_freq > 0) {
            confused = true; // Multiple laptops share the maximum frequency
        }
    }
    
    if (confused) {
        cout << "CONFUSED\n";
    } else {
        cout << best_laptop << "\n";
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