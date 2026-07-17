#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int a;
cin>>a;

vector<int> v(a);

for(auto &x : v){
    cin>>x;
}
int cnt = 0,cnt2 = 0;
for(int i = 0; i < v.size(); i++){
    if(v[i]%2==0) cnt++;
    else cnt2++;
}


if(cnt>cnt2) cout<<"ready for battle"<<endl;
else cout<<"not ready"<<endl;
}
