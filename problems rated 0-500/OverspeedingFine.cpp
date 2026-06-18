#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;cin>>t;
while(t--){
    int a;
    cin>>a;
    if(a<=70){
        cout<<"0"<<endl;
    }else if (a>70 && a<=100){
        cout<<"500"<<endl;
    }else{
        cout<<"2000"<<endl;
    }
}
}
