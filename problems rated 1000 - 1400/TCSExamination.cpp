#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
int d1, t1, m1;
int d2, t2, m2;
cin>> d1>> t1>>m1;
cin>>d2>>t2>>m2;
int total1 = d1 + t1 + m1;
int total2 = d2 + t2 + m2;
if(total1 != total2){
    if(total1 > total2) cout<<"Dragon"<<endl;
    else cout<<"Sloth"<<endl;
}
else if(d1 != d2){
    if(d1 > d2) cout<<"Dragon"<<endl;
    else cout<<"Sloth"<<endl;
}
else if(t1 != t2){
    if(t1 > t2) cout<<"Dragon"<<endl;
    else cout<<"Sloth"<<endl;
}
else{
    cout<<"Tie"<<endl;
}
}
}