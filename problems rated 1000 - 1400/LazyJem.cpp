#include <iostream>

using namespace std;

void solve() {
    long long n, b, m;
    cin >> n >> b >> m;
    
    long long total_time = 0;
    
    while (n > 0) {
        // Calculate how many problems Jem will solve in the current batch
        long long problems = (n + 1) / 2;
        
        // Add the time taken to solve these problems
        total_time += problems * m;
        
        // Decrease the remaining number of problems
        n -= problems;
        
        // If there are still problems left, add the break time
        if (n > 0) {
            total_time += b;
        }
        
        // Double the time required per problem for the next batch
        m *= 2;
    }
    
    cout << total_time << "\n";
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