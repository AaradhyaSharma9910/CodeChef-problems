#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(b>=a){
        cout<<0<<"\n";
    }else{
        int needed = a - b;
        int packets = (needed + 3) / 4;
        cout<< packets << "\n";
    }
}
return 0;
}
