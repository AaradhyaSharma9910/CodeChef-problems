#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int turns = (a+b)/2;
    if(turns % 2 == 0){
        cout<<"Alice"<<endl;
    }else{
        cout<<"Bob"<<endl;
    }
}
}
