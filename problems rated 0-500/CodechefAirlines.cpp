#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int x = a * 10;
    if(b<=x){
        cout<<b*c<<endl;
    }else{
        cout<<x*c<<endl;
    }
}
}
