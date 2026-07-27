#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x>=1000){
            ans++;
        }
    }
    cout<<ans<<"\n";
}
}
