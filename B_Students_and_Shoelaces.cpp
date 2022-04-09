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
#define pb push_back
//Global variables

//************Functions*****************


//************Functions****************

//************SOLVE********************

void solve(){
int n,m;
cin>>n>>m;
unordered_set<int> v[n+1];
input(m){
    int a,b;
    cin>>a>>b;
    v[a].insert(b);
    v[b].insert(a);
}
int res=0;
while(true){
 int rem=0;
 queue<int> q;
 for(int i=1;i<=n;i++){
  if(v[i].size()==1){
      v[i].clear();
      q.push(i);
      rem++;
  }
 }
 if(rem==0)break;
 if(rem>0)res++;
 while(!q.empty()){
     int i=q.front();
     q.pop();
     for(int j=1;j<=n;j++){
         if(j==i)continue;
         for(auto x:v[j]){
             if(x==i){
                 v[j].erase(x);
                 break;
             }
         }
     }

 }
}
cout<<res<<nl;


}//solve

//************SOLVE********************
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