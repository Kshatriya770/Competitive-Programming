#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long long n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        if(n%2 == 1){
            long long i = n/2;
            long long j = i+1;
            cout<<i<<" "<<j<<endl;
        }else{
            long long i = -(n-1);
            long long j = n;
            cout<<i<<" "<<j<<endl;
        }
    }
    return 0;
}