#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"loss"<<endl;
    }else if(a<b){
        cout<<"profit"<<endl;
    }else{
        cout<<"neutral"<<endl;
    }
    }
}

