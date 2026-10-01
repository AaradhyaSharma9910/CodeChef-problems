#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a( 2 * n);
    for(int i = 0; i < 2 * n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    bool possible = true;
    for(int i = 0; i < 2 * n -2; i++){
        if(a[i] == a[i + 2]){
            possible = false;
            break;
        }
    }
    if(possible){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}
}
