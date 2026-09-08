#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int gold = (a != c && a != d) + (b != c && b != d);
    cout<<gold<<endl;
}
}
