#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = a+b+c;
    int y = b+c+d;
    int z = c+d+a;
    int k = b+d+a;
    if( d>x || a>y || b>z || c>k) cout<<"yes"<<endl;
    else cout <<"no"<<endl;
}
}
