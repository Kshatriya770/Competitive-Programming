#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long x,y;
        cin>>x>>y;
        if (x == 0 || y == 0)
        {
            cout<<0<<" "<<0<<endl;
        }else{

        cout<<x*2<<" "<<((x*y)-1)*(x*y)<<endl;
        }
        
    }
    
}