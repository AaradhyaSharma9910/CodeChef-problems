#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    long long f = 1;
    for(int i = 1; i <=a; i++){
        f = f * i;
    }
    cout<<f<<endl;
}
}
