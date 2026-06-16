#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;cin>>t;
while(t--){
    int a;cin>>a;
    if(a<3){
        cout<<"light"<<endl;
        
    }else if(a>=3 && a<7){
        cout<<"moderate"<<endl;
    }else{
        cout<<"heavy"<<endl;
    }
}
}
