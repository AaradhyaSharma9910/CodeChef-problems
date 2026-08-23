#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int free_space = a - (b+c);
    if(free_space >= d) cout<<0<<endl;
    else if (free_space + max(b,c) >= d) cout<<1<<endl;
    else cout<<2<<endl;
}
}
