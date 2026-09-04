#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = a + c;
    int y = b + d;
    if( x != 180) cout<<"no"<<endl;
    else if(x == 180 && y == 180) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
}
