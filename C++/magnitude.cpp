#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c = a -b;
    long long result = pow(32, c);
    if(a == b){
        cout<<1<<endl;
    }else{
        cout<<result<<endl;
    }
}