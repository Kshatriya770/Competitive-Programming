#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans = ((2 * n) - k - 1)/2;
        cout<<ans*2<<endl;
    }
    
}