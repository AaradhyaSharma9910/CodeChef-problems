#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    if(n<3){
        cout<<"GOLD"<<endl;
    }else if(n<6){
        cout<<"SILVER"<<endl;
    }else{
        cout<<"BRONZE"<<endl;
    }
}

