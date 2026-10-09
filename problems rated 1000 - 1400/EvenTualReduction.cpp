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
    vector<int> count(26,0);
    for(char c : s){
        count[c - 'a']++;
    }
    bool possible = true;
    for(int i = 0; i < 26; i++){
        if(count[i] % 2 != 0){
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
