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

string s1,s2;
cin>>s1>>s2;
int sum1=0;
int psum2=0;
int sum_x=0;
for(auto x:s1){
   if(x=='+')sum1++;
   if(x=='-')sum1--;
}
for(auto x:s2){
    if(x=='+')psum2++;
    if(x=='-')psum2--;
    if(x=='?')sum_x++;
}
if(sum_x==0 && sum1==psum2){
    cout<<fixed<<setprecision(12)<<1.0;
    return;
}
if(sum_x==0 && sum1!=psum2){
    cout<<fixed<<setprecision(12)<<0.0<<nl;
    return;
}
int req_sum=sum1-psum2;
if(req_sum>sum_x){
    cout<<fixed<<setprecision(12)<<0.0<<nl;
    return;
}
int total_pos=pow(2,sum_x);
int pos=0;
for(int i=0;i<total_pos;i++){
    int temp_sum=0;
    for(int j=sum_x-1;j>=0;j--){
        if(i&(1<<j)){
            temp_sum++;
        }else{
            temp_sum--;
        }
    }
    if(temp_sum==req_sum)pos++;
}
cout<<fixed<<setprecision(12)<<1.0*pos/total_pos<<nl;


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