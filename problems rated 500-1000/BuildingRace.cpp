#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a * d < b * c) cout<<"chef"<<endl;
    else if(a * d > b * c) cout<<"chefina"<<endl;
    else cout<<"both"<<endl;
}
}
