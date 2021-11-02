#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int arr[4];
      cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
      int n = sizeof(arr) / sizeof(arr[0]);
      sort(arr, arr + n);
      int ans = arr[0] * arr[2];
      cout<<ans<<endl;
    }
}