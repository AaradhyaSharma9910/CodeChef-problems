#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long sum = 0;
    bool has_odd = false;
    for(int i = 0; i < n; i++){
        long long x;
        cin>>x;
        sum += x;
        if(x % 2 != 0){
            has_odd = true;
        }
    }
    if(sum % 2 == 0 && has_odd){
        cout<<"yes"<<endl;
    }else cout<<"no"<<endl;
}
}
