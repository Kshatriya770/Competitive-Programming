#include<iostream>
using namespace std;

int main(){
    int t,x,y,sum;
    cin>>t;
    while (t-->0)
    {
        /* code */
        cin>>x>>y;
        sum = x+y;
        if(sum%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}