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





void solve(){
  double vp,vd,dFindOut,dArrange,c;cin>>vp>>vd>>dFindOut>>dArrange>>c;
  ///there two essiential factors here distacne and time...
  if(vp>=vd){
    cout<<0;
    return;
  }
  double princess=vp*dFindOut;
  int res=0;
  while(princess<c){
      double time_temp=(princess)/(vd-vp);
      princess+=(vp*time_temp);
      if(princess>=c)break;
      res++;
      princess+=(vp*time_temp);
      princess+=(vp*dArrange);
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