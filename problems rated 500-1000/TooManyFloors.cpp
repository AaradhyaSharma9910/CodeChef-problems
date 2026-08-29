#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int floorX = (a-1)/10;
    int floorY = (b-1)/10;
    cout<<abs(floorX-floorY)<<endl;
    
}
}
