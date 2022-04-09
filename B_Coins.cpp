#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
 
void solve(){
    string c1,c2,c3;
    cin>>c1>>c2>>c3;
    int arr[3];
    for(int i=0;i<3;++i){
        arr[i]=0;
    }
    if(c1[1]=='<'){
        arr[c1[2]-'A']++;
    }else{
        arr[c1[0]-'A']++;
    }

    if(c2[1]=='<'){
        arr[c2[2]-'A']++;
    }else{
        arr[c2[0]-'A']++;
    }


    if(c3[1]=='<'){
        arr[c3[2]-'A']++;
    }else{
        arr[c3[0]-'A']++;
    }
    string res="ABC";
    res[arr[0]]='A';
    res[arr[1]]='B';
    res[arr[2]]='C';
    for(int i=0;i<3;++i){
        for(int j=i+1;j<3;++j){
            if(res[i]==res[j]){
                cout<<"Impossible";
                return;
            }
        }
    }
    cout<<res;
}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    
    
  return 0;
}//main