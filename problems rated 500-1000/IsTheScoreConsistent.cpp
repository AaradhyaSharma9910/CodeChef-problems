#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c >= a && d >= b){
        cout<<"possible"<<endl;
    } else {
        cout<<"impossible"<<endl;
    }
}
}
