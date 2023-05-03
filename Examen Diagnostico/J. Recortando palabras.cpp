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
  string k;
  int n;
  cin>>k>>n;
  for(int i=0;i<n;i++){
    cout<<k[i];
  }
  for(int i=k.size()-n;i<k.size();i++){
    cout<<k[i];
  }
  cnl;
  return 0;
}
//les fokin go