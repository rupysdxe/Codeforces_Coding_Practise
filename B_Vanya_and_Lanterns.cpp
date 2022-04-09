#include <bits/stdc++.h>
using namespace std;
#define ll double 
#define nl "\n"
#define rep(n) for(long long ii = 0; ii < n; ++ ii)

 
void solve(){
 ll no_of_lan;
 cin>>no_of_lan;
 ll len;
 cin>>len;
 vector<ll> v;
 rep(no_of_lan){
    ll i;
    cin>>i;
    v.push_back(i);
 }
  sort(v.begin(),v.end());
  ll min_num=v[0];
  ll max_num=len-v[no_of_lan-1];
  ll max_diff=0;
 for(int i=1;i<no_of_lan;i++){
     max_diff=max(max_diff,v[i]-v[i-1]);
 }
 double a=max(min_num,max(max_diff/2.0,max_num));
 cout<<fixed<<setprecision(10)<<a;

 




}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main