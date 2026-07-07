#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = a+c*d;
    if(x<b){
        cout<<"unfilled"<<endl;
    }else if(x>b){
        cout<<"overflow"<<endl;
    }else{
        cout<<"filled"<<endl;
    }
}
}
