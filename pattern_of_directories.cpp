#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s,u;
    cin>>t>>s;
    int size1 = s.size() - 1;
    for(int i = 0; i<t; i++){
        cin>>u;
        int size = u.size() - 1;
        if(u.at(0) == s.at(0) && u.at(size) == s.at(size1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}