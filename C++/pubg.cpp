#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,h;8057131151
    cin>>t;
    while(t--){
        cin>>n>>h;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n,greater<int>());
        int a = arr[0];
        int b = arr[1];
        int count = 0;

        while(h>1){
            h = h - a;
            count++;
            if(h<1){
                break;
            }
            h = h - b;
            count++;
            if(h<1){
                break;
            }
        }
        cout<<count<<endl;
    }
}