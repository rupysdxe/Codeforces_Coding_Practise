// Question : https://codeforces.com/contest/617/problem/B
#include <bits/stdc++.h>
#define int long long int
#define nl "\n"
#define tc ll t;cin>>t;while(t--)
using namespace std;
typedef long long ll;

void solve(){
ll n;cin>>n;
vector<ll> v;
ll cnt0=0;
for(ll i=0;i<n;i++){
  ll a;cin>>a;
  if(a==0)cnt0++;
  v.push_back(a);
}
if(cnt0==n){
  cout<<0;
  return;
}
if(cnt0==0 || cnt0==n-1){
  cout<<1;
  return;
}
ll i=0;
ll cnt=1;
while(i<v.size()){
  ll temp=i+1;
  if(i+1<v.size() && v[i]==1 && v[i+1]==0){
     ll j=i+1;
     ll zeros=0;
     while( j+1<v.size() && v[j]==0){
         zeros++;
         ++j;
     }
     if(v[j]==0){
       zeros=0;
     }
     cnt*=(zeros+1);
     temp=j;
  }
  i=temp;
}
cout<<cnt;


}//solve 

int32_t main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  solve();
  return 0;
}