#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MEM(a, b) memset(a, (b), sizeof(a))
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.rbegin(), cont.rend()
#define MP make_pair
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define show cout<<
#define sp(n) setprecision(n)
#define nl '\n'
const double pi=acos(-1.0);
int maxar(int arr[],int n) { int res=arr[0]; for(int i=0;i<n;i++){res=max(res,arr[i]);} return res;}
long long maxar(long long arr[],long long n) { long long res=arr[0]; for(long long i=0;i<n;i++){res=max(res,arr[i]);} return res;}
long long minar(long long arr[],long long n) { long long res=arr[0]; for(long long i=0;i<n;i++){res=min(res,arr[i]);} return res;}
int minar(int arr[],int n) { int res=arr[0]; for(int i=0;i<n;i++){res=min(res,arr[i]);} return res;}
void inpar(int arr[],int n){  for(int i=0;i<n;i++){cin>>arr[i];}  }
void inpar(long long arr[],long long n){for(long long i=0;i<n;i++){cin>>arr[i];}}

#define u64 long long
ll mulmod(ll a,ll b,ll c){

    return ((a%c)*(b%c))%c;
}
 
ll binPower(ll a ,ll n ,ll mod){
  ll res = 1;
  while(n){
    if(n & 1)   res = mulmod(res , a , mod);
    n >>= 1;    a = mulmod(a , a , mod);
  }return res % mod;
}



ll lcm(ll a,ll b){
  return (a*b)/__gcd(a,b);
}
 
bool ispalin(string s){
  int i=0,j = s.length()-1;
  while(i<j){
    if(s[i]!=s[j]){
      return false;
    }i++;j--;
  }return true;
}

bool ispow2(int n){
  return !(n&(n-1));
}

int str2num(string s){
  int res = 0;
  for(char ch:s)  res = res*10 + ch -'0';
  return res;
}

class tupl{
    public:
    ll x;   ll y;   ll r;
};
ll dp[1001][1001];

ll fn(ll a[],ll i,ll n,ll prev){
  if(i==n-1){
    return dp[i][prev] = (i-prev+1)*a[prev] - a[i];
  }else if(dp[i][prev]!=-1){
    return dp[i][prev];
  }else{
    return dp[i][prev] = min(
      (i-prev+1)*a[prev]-a[i]+
      fn(a,i+1,n,i),
      fn(a,i+1,n,prev)
    );
  }
}

void solve(){ 
    ll n;  cin>>n;
    ll a[n];  inpar(a,n);
    if(n==1){
      cout<<0<<nl;return;
    }
    MEM(dp,-1);
    cout<<max(fn(a,1,n,0),0ll)<<nl;
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tc = 1;
  cin>>tc;
  while(tc--){
    solve();
  }
  return 0;
}