#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[11];
    for(int i =0; i<8;i++){
        cin>>arr[i];
    }
    arr[8] = arr[0];
    arr[9] = arr[1];
    arr[10] = arr[2];

    int sum[8];
    for(int j = 0; j<8; j++){
        sum[j] = arr[j] + arr[j+1] + arr[j+2] + arr[j+3];
    }
    int n = sizeof(sum) / sizeof(sum[0]);
    sort(sum, sum + n);
    cout<<sum[7]<<endl;
}