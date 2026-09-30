#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int count_ones = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x == 1){
            count_ones++;
        }
    }
    if(count_ones % 2 == 0){
        cout<<"yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
}
