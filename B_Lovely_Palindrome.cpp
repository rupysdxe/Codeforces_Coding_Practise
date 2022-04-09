#include <bits/stdc++.h>
using namespace std;
#define ll double 
#define nl "\n"
#define rep(n) for(long long ii = 0; ii < n; ++ ii)

 
void solve(){
 string s1;
 string s2;
 cin>>s1;
 s2=s1;
 reverse(s1.begin(),s1.end());
 cout<<s2+s1;



}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main