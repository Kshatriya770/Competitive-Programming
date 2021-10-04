#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,d;
    cin>>t;
    while(t--){
        int sum = 0;
        cin>>a>>b>>c>>d;
        sum = a+b+c;
        int result = (sum/d); 
        if(sum>=d){
            if(sum%d==0){
                cout<<result<<endl;
            }else{
                cout<<result + 1<<endl;
            }
           
        }else{
            cout<<1<<endl;
        }
        
    }
} 