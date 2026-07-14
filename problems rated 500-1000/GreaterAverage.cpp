#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    double a,b,c;
    cin>>a>>b>>c;
    double x = (a+b)/2;
    if(x>c){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
}
