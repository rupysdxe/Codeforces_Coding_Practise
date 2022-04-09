#include <bits/stdc++.h>
using namespace std;
#define Int long long
#define nl "\n"
#define rep(n) for(long long i = 0; i < n; ++ i)

 
void solve(){
  Int n;
  cin>>n;
  vector<Int> v;
  rep(n){
     Int nums;
     cin>>nums;
     v.push_back(nums);
  }

  vector<Int> v1;
  v1.push_back(v[0]);
  for(Int i=1;i<n;i++){
    v1.push_back(v1[i-1]+v[i]);
  }

  vector<Int> v2;
  sort(v.begin(),v.end());
  v2.push_back(v[0]);   
  for(Int i=1;i<n;i++){
    v2.push_back(v2[i-1]+v[i]);
  }

  int q;
  cin>>q;
  while(q--){
    int type;
    Int l;
    Int r;
    cin>>type>>l>>r;
     Int sum;
    if(type==1){
       if(l-1==0){
            sum=v1[r-1];
        }else{
            sum=v1[r-1]-v1[l-2];
        }
    }else{
        if(l-1==0){
            sum=v2[r-1];
        }else{
            sum=v2[r-1]-v2[l-2];
        }
    }
    cout<<sum<<nl;
  }  
   

}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main