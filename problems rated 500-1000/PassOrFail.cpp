#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int x = 3 * b - ( a - b);
    if(x >= c) cout<<"pass"<<endl;
    else cout<<"fail"<<endl;
}
}
