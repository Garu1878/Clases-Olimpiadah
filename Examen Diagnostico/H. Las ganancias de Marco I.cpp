#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define cnl cout<<"\n"
#define nl "\n"
#define sp fixed<<setprecision

const int N=1e5+5;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int nu[N];
  ll sum[N]={};
  int n; cin>>n;
  for(int x=1;x<=n;x++){
    cin>>nu[x];
    sum[x]=sum[x-1]+nu[x];
  }
  int q;
  cin>>q;
  while(q--){
    int l,r;
    cin>>l>>r;
    ll res=sum[r]-sum[l-1];
    cout<<res<<nl;
  }
  return 0;
}
//les fokin go