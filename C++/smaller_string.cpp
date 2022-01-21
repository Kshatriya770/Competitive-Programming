#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
      int n,k;
      cin>>n>>k;
      int num;
      cin>>num;
      stringstream ss;
      ss<<num;
      string s;
      ss>>s;
      if(s.at(0) != 0){
          if(s.length() == 1){
              s.replace(0,1,"0");
              k = k-1;
          }else{
              s.replace(0,1,"1");
              if(s.at(0) == 1){

              }
              else{
                  k = k-1;
              }
          }
          
      }
      for(int i = 1; i<s.length(); i++){
          if(k == 0){
              break;
          }
          if(s.at(i) == 0){
              
          }else{
              s.replace(i,1,"0");
              k = k-1;
          }
      }
    // str.replace(0,1,str1);
      
      cout<<s<<endl;
    }
}