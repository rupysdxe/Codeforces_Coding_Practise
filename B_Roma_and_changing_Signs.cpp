#include <bits/stdc++.h>
using namespace std;
#define INF 1e7+1
#define nl '\n'

void solve(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int> v;

    while(n--){
        int i;cin>>i;
      v.push_back(i);
    }

    if(v[0]>0){
      if(k&1){
        v[0]=-1*v[0];
      }
    }else if(v[v.size()-1]<=0){
      for(int i=0;i<v.size();i++){
       v[i]=(-1)*v[i];
       --k;
       if(k==0)break;
     }
     if(k!=0){
       if(k%2==1){
          int n=v.size();
          v[n-1]=v[n-1]*-1;
       }
      
     }
   }
   else{
      int minIndex=0;
      for(int i=0;i<v.size();i++){
        if(k==0){
          break;
        }
      if(v[i]<=0){
       v[i]=-1*v[i];
       --k;
       continue;
     }
     if(v[i]>0){
       minIndex=i;
       break;
     }
   }
   if(k!=0 && k&1 ){
       int m=0;
       if(min(v[minIndex],v[minIndex-1])==v[minIndex]){
         v[minIndex]=v[minIndex]*(-1);
       }else{
         v[minIndex-1]=v[minIndex-1]*(-1);
       }
       
   }


    }
  
   long sum=0;
   for(auto x:v){
     sum+=x;
   }
   cout<<sum;



}
int main(){
  solve();
return 0;
}