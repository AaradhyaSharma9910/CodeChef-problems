#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int x = a*100;
    int y = b * 10;
    if(y<=x){
        cout<<"cloth"<<endl;
}else{
    cout<<"disposable"<<endl;
}
}
}