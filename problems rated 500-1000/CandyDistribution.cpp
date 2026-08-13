#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int y = a/b;
    if(a%b==0 && y%2==0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}
}
