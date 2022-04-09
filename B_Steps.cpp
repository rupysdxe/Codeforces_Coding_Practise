#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define srt(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ll long long int
#define input(n) for(long long z=1;z<=n;z++)
#define pb push_back
#define ll long long int
ll n,m;
bool is_valid(ll x,ll y){
if(x<=n && x>=1 && y>=1 && y<=m)return true;
return false;
}
void solve(){
  cin>>n>>m;
  ll a,b;
  cin>>a>>b;
  ll k;
  cin>>k;
  ll res=0;
  
  while(k--){
    ll x,y;cin>>x>>y;
    if(x==0 && y==0)continue;
      ll c=max(n,m);
      while(c){
        while(is_valid(a+(c*x),b+(c*y))){
         a=a+c*x;
         b=b+c*y;
         res+=c;
        }
        c=c/2;
      }
  }
  cout<<res;



}//solve

//************SOLVE********************
void file();
int32_t main(){
    file();
    solve();
    return 0;
}
void file(){
    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
     #endif
}















/*
Important :
String :substr(pos1,pos2),
 find(string), 
 size(int), 
 access-string[index], 
 push_back(char),  
*/

/*unordered_set uses hashing
*/

/*
set implements balanced binary tree 
s.count(element)- 1 is present and 0 if absent
s.erase(element) 
s.find(element) 

Upper_bound- iterator larger than x
Lower_bound- iterator at least x 
*/