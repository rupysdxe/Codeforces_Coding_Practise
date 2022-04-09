// https://codeforces.com/contest/236/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define tc long long int t;cin>>t;while(t--)
using namespace std;
#define MOD 1073741824


const int N = 1e6 + 1;
int divisors[N];
void Div() {
	for (int i = 1; i < N; i++)
		for (int j = i; j < N; j += i)
			divisors[j]++;
}
void solve(){
ll a,b,c;cin>>a>>b>>c;
ll sum=0;
Div();
for(int i=1;i<=a;i++){
  for(int j=1;j<=b;j++){
    for(int k=1;k<=c;k++){
      sum+=(divisors[i*j*k])%MOD;
    }
  }
}
cout<<sum;

}//solve 

int32_t main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  solve();
  return 0;
}