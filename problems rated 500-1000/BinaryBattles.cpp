#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int rounds = 0;
    int temp = a;
    while(temp > 1){
        temp /= 2;
        rounds++;
    }
    int total_time = (rounds * b) + ((rounds - 1) * c);
    cout<<total_time<<endl;
}
}
