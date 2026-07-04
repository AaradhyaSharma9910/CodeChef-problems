#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int a,b,c,d;
int count = 0;
    cin>>a>>b>>c>>d;
    if(a>=10){
        count++;
    }
    if(b>=10){
        count++;
    }
    if(c>=10){
        count++;
    }
    if(d>=10){
        count++;
    }
    cout<<count<<endl;
}
