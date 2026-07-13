#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = (a*2)+b;
    int y = (c*2)+d;
    if(x==y){
        cout<<"equal"<<endl;
    }
     else if(x>y){
        cout<<"messi"<<endl;
    }
    else{
        cout<<"ronaldo"<<endl;
    }
    return 0;
}

