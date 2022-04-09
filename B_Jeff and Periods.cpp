// https://codeforces.com/contest/352/problem/B
#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef long long ll;
 vector<int> nums[100000+1];
  vector<pair<int,int> > ans;
void solve(){
 int n;cin>>n;
 for(int i=1;i<=n;i++){
     int x;cin>>x;
     nums[x].push_back(i);
  }
  int res=0;
 for(int i=1;i<=100000;i++){
   if(nums[i].empty()){
     continue;
   }
   if(nums[i].size()==1){
     ans.push_back(make_pair(i,0));
     res++;
     continue;
   }

   if(nums[i].size()==2){
      ans.push_back(make_pair(i,nums[i][1]-nums[i][0]));
      res++;
     continue;
   }
   int diff=nums[i][1]-nums[i][0];
   bool isp=true;
   for(int j=1;j<nums[i].size()-1;j++){
       if(nums[i][j+1]-nums[i][j]!=diff){
         isp=false;
         break;
       }
   }
   if(isp){
     res++;
     ans.push_back(make_pair(i,diff));
   }
 }
 cout<<res<<nl;
  for(auto x:ans){
    cout<<x.first<<" "<<x.second<<nl;
  }

}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
  solve();
  return 0;
}