#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    long long total_planes_needed = (b + 99) / 100;
    long long new_planes = max(0LL, total_planes_needed - a);
    cout<<new_planes<<endl;
}
}
