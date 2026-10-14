#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int countA = 0, countB = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == '1') countA++;
        if(b[i] == '1') countB++;
    }
    if(countA == countB){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
}
