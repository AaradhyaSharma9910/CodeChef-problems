#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b || a == c || a == d || a == b +c || a == c + d || a == b + d || a == b + c + d) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
}
