#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        int res = (n+1)*y;
        if(res>=x){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}