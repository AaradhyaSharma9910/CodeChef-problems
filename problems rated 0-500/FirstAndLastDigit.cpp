#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int last_digit = n % 10;
    int first_digit = n;
    while(first_digit >= 10){
        first_digit /=10;
    }cout<<first_digit + last_digit << endl;
  
}}
