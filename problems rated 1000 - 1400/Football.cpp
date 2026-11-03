#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int A[150], B[150];
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    for(int i = 0; i < n; i++){
        cin>>B[i];
    }
    int max_points = 0;
    for(int i = 0; i < n; i++){
        int points = (A[i] * 20) - (B[i]* 10);
        if(points > max_points){
            max_points = points;
        }
    }
    cout<< max_points << endl;
}
}
