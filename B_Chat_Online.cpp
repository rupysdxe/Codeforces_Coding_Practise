#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define srt(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ll long long int
#define input(n) for(int z=1;z<=n;z++)
#define pb push_back
//Global variables

//************Functions*****************


//************Functions****************

//************SOLVE********************

void solve(){

int p,q,l,r;
cin>>p>>q>>l>>r;
vector<pair<int,int> > p_table;
vector<pair<int,int> > q_table;
input(p){
    int x=0;
    int y;
    cin>>x>>y;
    p_table.push_back(mp(x,y));
}
input(q){
    int x;
    int y;
    cin>>x>>y;
    q_table.push_back(mp(x,y));
}
int res_final=0;
for(int start=l;start<=r;start++){
    int res=0;
    for(auto x:p_table){
        int x1=x.first;
        int x2=x.second;
        for(auto y:q_table){
            int y3=y.first+start;
            int y4=y.second+start;
            if( (y3>=x1&& y3<=x2) || (y4>=x1 && y4<=x2) || (y3<=x1 && y4>=x2)){
                res++;
                break;
            }
           
        }
        if(res>0)break;
    }
if(res>0)res_final++;
}
cout<<res_final<<nl;







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