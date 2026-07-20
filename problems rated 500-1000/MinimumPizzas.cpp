#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int x = a * b;
    int y = x/4;
    if(x%4 != 0){
        y = y+1;
    }
    cout<<y<<endl;
}
}
