#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int x = 21-(a+b);
    if((a+b)<11) cout<<"-1"<<endl;
    else cout<<x<<endl;
}
}
