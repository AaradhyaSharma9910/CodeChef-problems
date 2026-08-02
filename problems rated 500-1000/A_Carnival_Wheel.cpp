#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
void solve() {
int l,a,b;
cin>>l>>a>>b;
int g = __gcd(l,b);
int ans = a + ( (l - 1 - a) / g) * g;
cout<<ans<<'\n';
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