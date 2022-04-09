#include <bits/stdc++.h>
using namespace std;
#define l long 
#define nl "\n"
#define rep(n) for(long ii = 0; ii < n; ++ ii)

 
void solve(){
 int n;
 vector<l> arr;
 cin>>n;
 rep(n){
    l a;
    cin>>a;
    arr.push_back(a);
 }
 if(is_sorted(arr.begin(),arr.end())){
    cout<<"yes"<<nl;
 cout<<1<<" "<<1;
 return;
 }
 int cnt=0;
 vector<l> index_i;
 for(int i=0;i<n-1;i++){
    int j=i+1;
    if(arr[i]>arr[j]){
        ++cnt;
        if(cnt>1){
            cout<<"no";
            return;
        }
        index_i.push_back(i);
         while(i<n && j<n && arr[i]>arr[j]){
            i++;
            j++;
        }
        index_i.push_back(j-1);
    }
 }
 sort(arr.begin()+index_i[0],arr.begin()+index_i[1]+1);
 if(is_sorted(arr.begin(),arr.end())){
    cout<<"yes"<<nl;
 cout<<index_i[0]+1<<" "<<index_i[1]+1;
 }else{
    cout<<"no";
 }

 

}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main