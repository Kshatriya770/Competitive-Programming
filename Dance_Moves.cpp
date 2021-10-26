#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long x,y;
        cin>>x>>y;
        if (x>y)
        {
            cout<<x-y<<endl;
        }else{
            long long z = (y - x)/2;
            long long a = (y-x)%2;
            if (a == 1)
            {
                cout<<z+2<<endl;
            }else{
                cout<<z<<endl;
            }
        }
        
       
        
    }
    
}