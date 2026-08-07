#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<ll> a(m);
    for(int i = 0; i < m; i++) cin>>a[i];
    bool flag = false;
    for(int i = m - 1; i > 0; i--){
        if (a[i] == 1){
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<n-a[m-1]+1<<endl;
    }
    else{
        cout<<1<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}