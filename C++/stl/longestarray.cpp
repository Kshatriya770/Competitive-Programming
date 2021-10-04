#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        double sum = (n*(n+1))/2;

        cout<<int(sum/n)<<endl;

    }
    
}