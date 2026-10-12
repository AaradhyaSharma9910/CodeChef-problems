#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long odd = (n + 1)/2;
    long long even = n / 2;
    cout<<2*odd*even<<endl;
}
}
