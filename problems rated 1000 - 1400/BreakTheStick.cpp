#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    long long n,x;
    cin>>n>>x;
    if(x % 2 != 0 || n % 2 == 0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
}
