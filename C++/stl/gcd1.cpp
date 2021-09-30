#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t-->0)
    {
        cin>>n;
        int arr[n];
        int arr1[n];
        int count = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            int temp = arr[i];
             count=0;
            for(int j = 0;j<n;j++){
               
                if(temp%2==1){
                    break;
                }else{
                    temp = temp/2;
                    count++;
                }
            }
            arr1[i] = count;
        }
         cout << *min_element(arr1, arr1 + n);
         
    }
    
}