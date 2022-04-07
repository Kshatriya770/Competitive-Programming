#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int x,y,K;
      cin>>x>>y>>K;
     if (x%K == 0 && y%K == 0)
     {
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
     
    }
}