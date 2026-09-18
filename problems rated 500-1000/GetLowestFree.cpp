#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int total_sum = a + b + c;
    int min_price = min({a,b,c});
    cout<<total_sum - min_price<<endl;
}
}
