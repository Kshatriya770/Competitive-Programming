#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
      string s;
      string str[s.length()];
      int k = 0;
      string add ;
      cin>>s;
      for(int i = 1 ; i<s.length() - 1 ; i++){
          if (s.at(i) == ',') {
              str[k] = add;
              k++;
          }else{
              add += s.at(i);
          }
      }
      int y = 0;
      for(int i = 0 ; i<s.length(); i++){
          stringstream dist(str[i]);
          int x = 0;
          dist >> x;
          y = y + x;
      }
      cout<<y<<endl;
    }
}