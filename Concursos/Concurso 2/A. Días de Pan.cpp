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
  
  int di,p,q,k;
  map<int,int> pan;
  cin>>di>>p>>q;
  for(int x=0;x<p;x++){
    cin>>k;
      pan[k]++;
      pan[k+1]++;
    if(k%2==0){
      pan[k-2]++;
    }
    else{
      pan[k-1]++;
    }
  }
  for(int x=0;x<q;x++){
    cin>>k;
    if(pan[k]==0) cout<<"N";
    else cout<<"Y";
    cnl;
  }
  return 0;
}
//les fokin go