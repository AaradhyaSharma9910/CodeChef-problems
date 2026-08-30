#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,x,b,y;
    cin>>a>>x>>b>>y;
    if(a * y > b * x) cout<<"alice"<<endl;
    else if(a * y < b * x) cout<<"bob"<<endl;
    else cout<<"equal"<<endl;
}
}
