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
  int n,m,e,r;
  cin>>n;
  vector<int> a(n);
  for(int x=0;x<n;x++){
    cin>>a[x];
  }
  cin>>m;
  vector<int> b(m);
  for(int x=0;x<m;x++){
    cin>>b[x];
  }
  e=min(n,m);
  r=max(n,m);
  int i;
  cout<<"Los elementos del vector resultante son:\n";
  for(i=0;i<e;i++){
    cout<<a[i]*b[i]<<" ";
  }
  for(i;i<r;i++){
    if(r==m) cout<<b[i]<<" ";
    else cout<<a[i]<<" ";
  }
  cnl;
  return 0;
}
//les fokin go