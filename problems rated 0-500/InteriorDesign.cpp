#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = 0;
    x = a+b;
    int y = 0;
    y = c+d;
    if(x<y){
        cout<<x<<endl;
    }else{
        cout<<y<<endl;
    }
}
}
