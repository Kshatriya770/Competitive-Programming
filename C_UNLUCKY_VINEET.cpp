#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,flag1=1,flag2=1,a[111],b[111];char str[222];
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++) a[i]=str[i]-'0';
    for(int i=n;i<2*n;i++) b[i-n]=str[i]-'0';
    sort(a,a+n);
    sort(b,b+n);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]<=b[i])
        {
            flag1=0;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=b[i])
        {
            flag2=0;
            break;
        }
    }
    //cout<<flag1<<" "<<flag2<<endl;
    if(!flag1&&!flag2) printf("NO\n");
    else printf("YES\n");
    return 0;
}