#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr(4);
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    // Sort the array to easily check the proportion
    sort(arr.begin(), arr.end());

    // Check if a * d == b * c using the sorted elements
    // arr[0] : arr[1] = arr[2] : arr[3]  =>  arr[0] * arr[3] == arr[1] * arr[2]
    if (arr[0] * arr[3] == arr[1] * arr[2]) {
        cout << "Possible\n";
    } else {
        cout << "Impossible\n";
    }

    return 0;
}