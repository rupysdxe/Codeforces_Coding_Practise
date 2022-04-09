#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string res="";
    
    int i=0;
        while(n--){
             if(n&1){
                res=s[i]+res;
             }else{
                res.push_back(s[i]);
             }
             i++;
        }
    cout<<res;

    
}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    solve();
    return 0;
}//main