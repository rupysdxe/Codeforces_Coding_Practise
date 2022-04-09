#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef long long ll;
vector<string> subsets;


void powerset(string s,int i,string curr){
  if(i==s.size()){
    subsets.push_back(curr);
    return;
  }
  curr.push_back(s[i]);
  powerset(s,i+1,curr);
  curr.pop_back();
  powerset(s,i+1,curr);
}
void solve(){
string s;cin>>s;
int n=s.length();
vector<int> bear;
int now=0;
int res=0;
for(int i=0;i+3<n;i++){
  string sub=s.substr(i,4);
  if(sub=="bear")bear.push_back(i+1);
}
int y=1;
int x=1;
int ans=0;
for(int i=0;i<bear.size();i++){
   y=n-bear[i]-2;
   if(i)
    x=bear[i-1]+1;
  x=bear[i]-x+1;
  ans+=(x*y);
}

cout<<ans;



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