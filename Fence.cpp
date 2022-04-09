#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define rep(n) for(long long ii = 0; ii < n; ++ ii)

 
void solve(){
 int n;
 cin>>n;
 // from given n numbers i have to return min_sum(k) l-r and output l
 int k;
 cin>>k;
 vector<int> v;
 //take input
 rep(n){
   int i;
   cin>>i;
   v.push_back(i);
 }
  // find min_sum(k) and return l 
 ll min_sum=accumulate(v.begin(),v.begin()+k,0);
 ll curr_sum=min_sum;
 int min_index=1;
  for(int i=1;i<=n-k;i++){
    curr_sum=curr_sum-v[i-1]+v[i+k-1];
    if(curr_sum<min_sum){
        min_sum=curr_sum;
        min_index=i+1;
    }}
    cout<<min_index<<nl; 

}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main