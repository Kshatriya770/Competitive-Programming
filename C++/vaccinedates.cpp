#include<iostream>
using namespace std;

int main(){
    int t,d,l,r;
    cin>>t;
    while (t-->0)
    {
        cin>>d>>l>>r;
        if(d>=l && d<=r){
            cout<<"Take Second dose now"<<endl;
        }else if(d<l){
            cout<<"Too Early"<<endl;
        }else{
            cout<<"Too Late"<<endl;
        }
        return 0;
    }
    
}