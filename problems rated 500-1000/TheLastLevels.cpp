#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if (a<=3) cout<<a*b<<endl;
    else cout<<(a*b)+((a-1)/3)*c<<endl;
}
}
