#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int ans = a + max(0, a-b);
    cout<<ans<<endl;
}
}
