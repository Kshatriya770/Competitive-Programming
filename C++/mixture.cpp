#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>0){
            if(b>0){
                cout<<"Solution"<<endl;
            }
            else{
                cout<<"Solid"<<endl;
            }
        }else if(b>0){
            cout<<"Liquid"<<endl;
        }
    }
}