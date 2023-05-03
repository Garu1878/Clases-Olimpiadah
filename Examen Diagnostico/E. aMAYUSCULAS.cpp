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
  getline(cin,k);
  for(int i=0;i<k.size();i++){
    if((k[i]>96)&&(k[i]<123)){
      k[i]=k[i]-32;
    }
  }
  cout<<k;
  return 0;
}
//les fokin go