#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int a;
double b;
cin>>a>>b;
if(a+0.50<=b && a%5==0){
    cout<<(b-a)-0.50<<endl;
}else{
    cout<<b<<endl;
}
}
