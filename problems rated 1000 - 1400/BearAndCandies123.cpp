#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int limak = 0, bob = 0;
    int i = 1;
    while(true){
        limak += i;
        if(limak > a){
            cout<<"bob"<<endl;
            break;
        }
        i++;
        bob += i;
        if(bob > b){
            cout<<"limak"<<endl;
            break;
        }
        i++;
    }
}
}
