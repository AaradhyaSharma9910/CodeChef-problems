#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a<b){
        cout<<"repair"<<endl;
    }else if(a>b){
        cout<<"new phone"<<endl;
    }else{
        cout<<"any"<<endl;
    }
}
}
