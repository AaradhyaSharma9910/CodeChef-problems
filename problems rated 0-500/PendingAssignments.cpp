#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int x = a * b;
    int y = c * 24 * 60;
    if(x<=y){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
}
}
