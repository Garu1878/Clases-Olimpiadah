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
  int n,ak=0;
  float ac=0,p;
  cin>>n;
  int a[n];
  for(int x=0;x<n;x++){
    cin>>a[x];
    ac+=a[x];
  }
  p=ac/n;
  for(int x=0;x<n;x++){
    if(a[x]>p) ak++;
  }
  cout<<ak;
  return 0;
}
//les fokin go