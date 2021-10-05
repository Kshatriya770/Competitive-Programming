#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        int sum = 0;
        cin>>a>>b>>c>>d;
        sum = a+b+c;
        if(sum<=d){
            cout<<1<<endl;
        }else if((2*d)<=sum){
            cout<<3<<endl;
        }else{
            cout<<2<<endl;
        }
        
    }
} 