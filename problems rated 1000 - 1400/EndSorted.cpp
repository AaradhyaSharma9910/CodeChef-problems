#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> p(n);
    int id1 = 0, idn = 0;
    for(int i = 0; i < n; i++){
        cin>>p[i];
        if(p[i] == 1){
            id1 = i;
        }
        if(p[i] == n){
            idn = i;
        }
    }
    int ans = id1 + (n - 1 - idn);
    if(id1 > idn){
        ans--;
    }
    cout<<ans<<"\n";
}
}
