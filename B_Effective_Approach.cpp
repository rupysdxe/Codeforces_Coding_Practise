#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
 
void solve(){
    ll n;
    cin>>n;
    ll temp=n;
    ll num[n+1];
   for(ll i=0;i<n;++i){
      ll m;
      cin>>m;
      num[m]=i;
   }
     ll q;
    cin>>q;
    ll font=0;
    ll back=0;
    while(q--){
        ll f;
        cin>>f;
        ll index_f=num[f];
         font+=index_f+1;
         back+=n-index_f;
       
    }
     cout<<font<<" "<<back<<nl;
  


}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main