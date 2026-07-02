#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"setter"<<endl;
    }else if(b>c && b>a){
        cout<<"tester"<<endl;
    }else{
        cout<<"editorialist"<<endl;
    }
}
}
