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
   long n;
   cin>>n;
   set<long> v;
   input(n){
       long i;cin>>i;
       v.insert(i);
   }
   if(v.size()==1 || v.size()==2){
       cout<<"YES";
       return;
   }
   if(v.size()==3){
       vector<long> e;
       for(auto x:v){
           e.pb(x);
       }
       double x=(e[0]+e[2])/2.0;
       if(x==e[1]){
            cout<<"YES";
            return;
       }
   }
   cout<<"NO";


  

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