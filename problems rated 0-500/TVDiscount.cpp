#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = a-c;
    int y = b - d;
    if(x<y){
        cout<<"first"<<endl;
    }else if (x>y){
        cout<<"second"<<endl;
    }else{
        cout<<"any"<<endl;
    }
}
}
