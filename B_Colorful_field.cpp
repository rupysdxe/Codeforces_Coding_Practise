#include <bits/stdc++.h>
using namespace std;
#define ll long 
#define nl "\n"
#define input_n(n) for(long ii = 0; ii < n; ++ ii)
/*
Local array size <=1e6 2D-1e3 *1e3
Global array size<=1e8


*/

void solve(){
   ll row,col,no_was,q;
   cin>>row>>col>>no_was>>q;
   vector<pair<ll,ll> > waste_cell;
   input_n(no_was){
    ll i,j;
    cin>>i>>j;
    waste_cell.push_back(make_pair(i,j));
   }
input_n(q){
    ll r,c;
    cin>>r>>c;
    ll cnt_waste=0;
    for(int i=0;i<waste_cell.size();i++){
        if(waste_cell[i].first==r && waste_cell[i].second==c){
            cout<<"Waste"<<nl;
             r=-1;
            break;
        }
        if(waste_cell[i].first<r){
            cnt_waste++;
        }
        if(waste_cell[i].first==r && waste_cell[i].second<c){
            cnt_waste++;
        }
    }
    if(r==-1)continue;
    ll no_of_cell=(r-1)*col+(c-1);
    int fruit_index=(no_of_cell-cnt_waste)%3;
    if(fruit_index==0){
        cout<<"Carrots"<<nl;
    }else if(fruit_index==1){
         cout<<"Kiwis"<<nl;
    }else{
         cout<<"Grapes"<<nl;
    }


}
    
}//solve
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}//main