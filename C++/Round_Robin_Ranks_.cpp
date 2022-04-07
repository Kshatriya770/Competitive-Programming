#include<bits/stdc++.h>
using namespace std;

void solve(){
       long long n,k;
        cin>>n>>k;
        long long ans = ((2 * n) - k - 1)/2;
        cout<<ans*2<<endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
     solve();
    }
}