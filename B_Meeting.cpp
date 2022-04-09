// https://codeforces.com/contest/144/problem/B
#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef long long ll;
double dis(float x1,float y1,float x2,float y2){
  double x=(x2-x1)*(x2-x1);
  double y=(y2-y1)*(y2-y1);
  return sqrt(x+y);
}
void solve(){
 float recx1;cin>>recx1;
 float recy1;cin>>recy1;
 float recx2;cin>>recx2;
 float recy2;cin>>recy2;
 vector<pair<float,float>> v;
 
 for(int i=min(recx1,recx2);i<=max(recx1,recx2);i++){
   for(int j=min(recy1,recy2);j<=max(recy1,recy2);j++){
    if(i==recx1 || i==recx2 || j==recy1 || j==recy2){
      v.push_back({i,j});
    }
   }
 }
  int gn=v.size();
  vector<bool> gen(gn,0);
int heatn;cin>>heatn;
int bn=0;
while(heatn--){
 float a;cin>>a;
 float b;cin>>b;
 float d;cin>>d;
 for(int i=0;i<v.size();i++){
   if(gen[i])continue;
   if(dis(a,b,v[i].first,v[i].second)<=d){
     gen[i]=true;
   }
 }


}
for(int i=0;i<gen.size();i++){
   if(gen[i]==false){
     bn++;
   }
 }
cout<<bn;
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