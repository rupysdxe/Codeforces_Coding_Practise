#include <bits/stdc++.h>
using namespace std;
#define ll double 
#define nl "\n"
#define rep(n) for(long long ii = 0; ii < n; ++ ii)

 
void solve(){
 int r,c;
 cin>>r>>c;
 char p;
 cin>>p;
 char arr[r][c];
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        char a;
        cin>>a;
        arr[i][j]=a;
    }
 }
 set<char> res;
 int res_f;
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        char a=arr[i][j];
        if(a==p){
            if(i-1>=0)res.insert(arr[i-1][j]);
            if(j+1<c)res.insert(arr[i][j+1]);
            if(j-1>=0)res.insert(arr[i][j-1]);
            if(i+1<r)res.insert(arr[i+1][j]);

        }
    }
 }

cout<<res.size()-count(res.begin(),res.end(),'.')-count(res.begin(),res.end(),p);


}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main