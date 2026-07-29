#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    if(a>=1 && a<=50) cout<<"left"<<endl;
    if(a>50 && a < 101) cout<<"right"<<endl;
}
}
