#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    string s1, s2;
    cin>>s1>>s2;
    int min_diff = 0, max_diff = 0;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '?' || s2[i] == '?'){
            max_diff++;
        }else if(s1[i] != s2[i]){
            min_diff++;
            max_diff++;
        }
    }
    cout<<min_diff<<" "<<max_diff<<endl;
}
}
