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


void solve(){
  int row,col;
  cin>>row>>col;
 vector<string> matrix;
 for(int i=0;i<row;i++){
   string s;cin>>s;
   matrix.pb(s);
 }
int max_diff=0;
  set<int> res;
 for(auto x:matrix){
   bool is_before=false;
    
      int g=0;
      int s=0;
   for(int i=0;i<x.length();i++){
       if(x[i]=='S')is_before=true;
       if(x[i]=='G' && is_before){
         cout<<-1;
         return;
       }
       if(x[i]=='G'){
           g=i+1;

       }
       if(x[i]=='S'){
         s=i+1;
       }
   }
   res.insert(g-s);
 }
 cout<<res.size();
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