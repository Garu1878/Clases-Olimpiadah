#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define cnl cout<<"\n"
#define nl "\n"
#define sp fixed<<setprecision
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,mi=1e2,ma=0,k;
  cin>>n;
  for(int x=0;x<n;x++){
    cin>>k;
    mi=min(k,mi);
    ma=max(k,ma);
  }
  cout<<(ma+mi)*n;
  return 0;
}
//les fokin go