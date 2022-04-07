#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string str1, str2, ans = 0;
        cin>>str1>>str2;
        int arr[26];
        cout<<str1.at(i-1) - 96<<endl;
        for (int i = 0; i < str.length(); i++){
            int a = str2.at(i) - 96;
            int b = str2.at(i-1) - 96;
            ans = ans + (int(a)-int(b));
        }
        cout<<ans<<endl;
    }
}