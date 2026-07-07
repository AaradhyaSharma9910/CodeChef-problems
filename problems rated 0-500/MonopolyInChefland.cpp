#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;

    if(c>(a+b) || a>(b+c) || b > (a+c)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
}
