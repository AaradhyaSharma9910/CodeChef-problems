#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    int rem = a % 3;
    if(rem == 0){
        cout<<"normal"<<endl;
    } else if(rem == 1){
        cout<<"huge"<<endl;
    } else{
        cout<<"small"<<endl;
    }
}
}
