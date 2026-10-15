#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    if(x >= y) cout<<"pizza"<<endl;
    else if(x >= z) cout<<"burger"<<endl;
    else cout<<"nothing"<<endl;
}
}
