#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    bool hard = false;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            count = 0;
        }
        else{
            count++;
        }
        if(count >= 4){
            hard = true;
            break;
        }
    }
    if(hard) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}
}
