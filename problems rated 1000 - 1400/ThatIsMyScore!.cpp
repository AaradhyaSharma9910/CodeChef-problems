#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // Vector to store the maximum score for each of the 11 problems.
    // Index 0 is unused, indices 1 to 8 are scorable, 9 to 11 are non-scorable.
    vector<int> max_score(12, 0);
    
    for (int i = 0; i < n; i++) {
        int p, s;
        cin >> p >> s;
        
        // We only care about scorable problems (1 to 8)
        if (p <= 8) {
            max_score[p] = max(max_score[p], s);
        }
    }
    
    // Calculate the total score by summing up the best scores of problems 1 to 8
    int total_score = 0;
    for (int i = 1; i <= 8; i++) {
        total_score += max_score[i];
    }
    
    cout << total_score << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}