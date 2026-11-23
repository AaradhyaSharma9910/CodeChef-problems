#include <bits/stdc++.h>
using namespace std;

void solve() {
    int G;
    cin >> G;
    while (G--) {
        int I, Q;
        long long N; // Using long long for safety, though N <= 10
        cin >> I >> N >> Q;
        
        // If N is even, or if the initial state equals the queried state when N is odd
        if (N % 2 == 0 || I == Q) {
            cout << N / 2 << "\n";
        } else {
            cout << (N / 2) + 1 << "\n";
        }
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