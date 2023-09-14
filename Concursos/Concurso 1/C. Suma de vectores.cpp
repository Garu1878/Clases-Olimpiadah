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
  int n;
  cin>>n;
  int a[n],b[n];
  for(int x=0;x<n;x++){
    cin>>a[x];
  }
  for(int x=0;x<n;x++){
    cin>>b[x];
  }
  for(int x=0;x<n;x++){
    cout<<a[x]+b[x]<<" ";
  }
  return 0;
}
//les fokin go