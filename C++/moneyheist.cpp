#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,count = 0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == s[i+1])
            {
                count++;
                break;
            }
            
        }
        if (count == 1)
        {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
    }
    
}