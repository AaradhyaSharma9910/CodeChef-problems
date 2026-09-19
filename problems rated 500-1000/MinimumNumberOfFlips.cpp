#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        sum += x;
    }
    if(n%2 != 0){
        cout<<-1<<endl;
    }else{
        cout<<abs(sum)/2<<endl;
    }
}
}
