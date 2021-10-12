#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
        int arr[n],temp=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            temp = temp + arr[i];
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
        count=count+arr[i];
        }
        if(temp==n){
            cout<<100<<endl;
        
        }
        else if(count == m)
        {
            cout<<k<<endl;
        
        }else if (temp>m && temp<n)
        {
            cout<<k<<endl;
        }
        
        else{
            cout<<0<<endl;
        
        }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        
        solve();
        
    }
    return 0;
    
}