#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a;
    cin>>a;
    int rev = 0;
    while(a!=0){
        int rem = a % 10;
        rev = rev * 10 + rem;
        a /= 10;
    }
    cout<<rev<<endl;
}}
