// https://codeforces.com/contest/376/problem/B
#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef long long ll;

void solve(){
 int n;cin>>n;
 int m;cin>>m;
 if(m==0){
   cout<<0;
   return;
 }
vector<int> mon(n+1,0);
 for(int i=1;i<=m;i++){
   int p1;cin>>p1;
   int p2;cin>>p2;
   int amt;cin>>amt;
  mon[p1]-=amt;
  mon[p2]+=amt;
 } 
 int res=0;
 for(int i=1;i<=n;i++){
    if(mon[i]>0)res+=mon[i];
 }
 cout<<res;
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