#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define srt(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ll long long int
#define input(n) for(int i=1;i<=n;i++)
// Start here ...............
void solve(){
   int n;
   cin>>n;

   vector<long> v;
   input(n){
       long x;
       cin>>x;
       v.pb(x);
   }
  
   sort(srt(v));

   while(v.size()>=3){
        int i=0;
        int j=v.size()-2;
        int k=v.size()-1;
       while(i<j){
       if(v[k]<(v[i]+v[j])){
           cout<<"YES";
           return;
       } 
       i++;
            }
            v.pop_back();
   }
   cout<<"NO";

  
}
// Ends here.................
void file();
int32_t main(){
    // file();
    solve();
    return 0;
}
void file(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
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