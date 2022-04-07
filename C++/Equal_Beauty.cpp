#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        
        ll n,minn =INT_MAX;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n<=2){
        cout<<0<<endl;}
        else if(n==3){
        cout<<min(abs(a[0]-a[1]),abs(a[1]-a[2]))<<endl;}
        else{
        for(int i=1;i<n-2;i++)
        {
            minn=min(minn,abs((a[i]-a[0])-(a[n-1]-a[i+1])));
        }
        cout<<minn<<endl;
        }
    }
    return 0;
}