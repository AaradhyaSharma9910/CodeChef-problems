#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    if(a<4){
        cout<<"mild"<<endl;
    }else if(a>=4 && a<7){
        cout<<"medium"<<endl;
    }else{
        cout<<"hot"<<endl;
    }
}
}
