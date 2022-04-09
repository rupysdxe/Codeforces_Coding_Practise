#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
 
void solve(){
    string colors="ROYGBIV";
    int n;
    cin>>n;
    if(n==7){
        cout<<colors<<nl;
        return;
    }
    n=n-7;
    while(true){
        for(int i=3;i<7;++i){
            colors.push_back(colors[i]);
            --n;
            if(n==0){
                cout<<colors<<nl;
                return;
            }
      }
      
  }
    
}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    solve();
    return 0;
}//main