#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int start = 0, ltime = 0;
        
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            
            if (s == "START38") {
                start++;
            } else {
                ltime++;
            }
        }
        
        cout << start << " " << ltime << "\n";
    }
    
    return 0;
}