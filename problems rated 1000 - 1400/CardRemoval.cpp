#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int freq[11]= {0};
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        freq[x]++;
    }
    int max_freq = 0;
    for(int i = 1; i <= 10; i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
        }
    }
    cout<<n - max_freq<<endl;
}
}
