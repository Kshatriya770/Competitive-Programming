#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int arr[5];
        int india = 0, england = 0;
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
            if (arr[i] == 0)
            {
                /* code */
            }else if(arr[i] == 1){
                india++;
            }else{
                england++;
            }
            
        }
        if (india == england)
        {
            cout<<"DRAW"<<endl;
        }else if(india > england){
            cout<<"INDIA"<<endl;
        }else{
            cout<<"ENGLAND"<<endl;
        }
        
    }
    
}