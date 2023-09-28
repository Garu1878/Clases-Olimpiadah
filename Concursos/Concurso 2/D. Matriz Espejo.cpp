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
  int n,m;
  cin>>n>>m;
  int ma[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>ma[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=m-1;j>=0;j--){
      cout<<ma[i][j]<<" ";
    }
    cnl;
  }
  return 0;
}
//les fokin go