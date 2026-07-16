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
    
    if(c*100 > x * 50){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
}
