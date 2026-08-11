#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int diff = b - a;
    int ans = diff / 8;
    if(diff % 8 != 0){
        ans ++;
    }
    cout<<ans<<endl;
}
}
