#include<iostream>
using namespace std;

int main(){
    int t,x,y,z,play;
    cin>>t;
    while (t-->0)
    {
        cin>>x>>y>>z;
        play = (z*2) + x;
        if(play>y){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
}