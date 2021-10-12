#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>n;
        int a, b;
        cin>>a>>b;
        int c = a&b;
        if(c == 0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}