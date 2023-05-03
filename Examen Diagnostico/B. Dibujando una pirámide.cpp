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
  char c;
  int n;
  cin>>n>>c;
  for(int i=0;i<n;i++){
    for(int j=n;j>i;j--){
      cout<<" ";
    }
    for(int j=0;j<=i;j++){
      cout<<c<<" ";
    }
    cnl;
  }
  return 0;
}
//les fokin go