#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int even_count = a / 2;
    int odd_count = a - even_count;
    
    int total_duration = (even_count * b) + (odd_count * c);
    cout<<total_duration<<endl;
}
}
