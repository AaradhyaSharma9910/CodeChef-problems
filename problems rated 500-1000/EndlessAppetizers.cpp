#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y,r;
    cin>>x>>y>>r;
    int total = x + (r/30);
    int plates = (total + y - 1)/y;
    cout<<plates<<endl;
}
}
