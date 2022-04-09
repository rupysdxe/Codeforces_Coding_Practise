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


bool sort_comp(pair<double,double> a, pair<double,double> b){
  if(a.second==b.second){
    return a.first<b.first;
  }
  if(b.second>a.first){
    return b.second<a.second;
  }
  return b.second>a.second;
}


void solve(){
  double n;cin>>n;
  double t1,t2;cin>>t1>>t2;
  double k;cin>>k;
  vector<pair<double,double> > d;
  for(double i=1;i<=n;i++){
     double x,y;cin>>x>>y;
     double ans=(x*t1)-(x*t1*k/100)+(y*t2);
     double ans1=(y*t1)-(y*t1*k/100)+(x*t2);
     if(ans>ans1){
       d.pb(mp(i,ans));
     }else{
       d.pb(mp(i,ans1));
     }
  } 
 sort(d.begin(),d.end(),sort_comp);
 for(auto x:d){
   cout<<fixed<<setprecision(0)<<x.first<<" ";
   cout<<fixed<<setprecision(2)<<x.second<<nl;
 }






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