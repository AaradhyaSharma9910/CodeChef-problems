#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum1 = 0, sum2 = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;

        // Add scores to get cumulative total
        sum1 += s1;
        sum2 += s2;

        // Check lead for Player 1
        if (sum1 > sum2) {
            int lead = sum1 - sum2;
            if (lead > max_lead) {
                max_lead = lead;
                winner = 1;
            }
        } 
        // Check lead for Player 2
        else {
            int lead = sum2 - sum1;
            if (lead > max_lead) {
                max_lead = lead;
                winner = 2;
            }
        }
    }

    // Print the result
    cout << winner << " " << max_lead << endl;

    return 0;
}