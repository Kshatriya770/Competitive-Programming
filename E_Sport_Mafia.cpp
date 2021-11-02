#include<bits/stdc++.h>
using namespace std;

int main()
{
 
    long long n, k;
 
    cin>>n>>k;
 
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        long long ans = sum - k;
        if(ans >= 0 && i + ans == n){
            cout << ans << endl;
        }
    }
 
}