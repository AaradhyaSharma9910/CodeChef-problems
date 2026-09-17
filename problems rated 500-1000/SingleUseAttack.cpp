#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = 1 + (a - c + b - 1) / b;
    cout<<ans<<"\n";
}
}
