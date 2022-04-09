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
void solve(){
    int n_r1;
    cin>>n_r1;
  vector<int> r1;
  input(n_r1){
      int i;
      cin>>i;
      r1.pb(i);
  } 

  int n_p1;
  cin>>n_p1;
  vector<int> p1;
  input(n_p1){
      int i;cin>>i;
      p1.pb(i);
  }
  int n_p2;
  cin>>n_p2;
  vector<int> p2;
  input(n_p2){
      int i;cin>>i;
      p2.pb(i);
  }

int A,B;
cin>>A>>B;
//// two conditions -- maximize r2 and equal to ration A:B
sort(srt(r1));
sort(srt(p1));
sort(srt(p2));
for(int i=n_r1-1;i>=0;i--){
    for(int j=n_p1-1;j>=0;j--){
        for(int k=0;k<n_p2;k++){
            double y=1.0*p1[j]*B;
            double x=1.0*p2[k]*A;
            double r=r1[i];
            double r2=sqrt((r*r*y)/(x+y));
            cout<<fixed<<setprecision(12)<<r2;
            return;

        }
    }
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