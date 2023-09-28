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
  string s;
  int sz, rul=0;
  bool ans=false;
  cin>>s;
  sz=s.size();
  for(int i=0;i<sz;i++){
    if(s[i]>96) rul++;
  }
  if(rul==0) ans=true;
  else if(rul==sz) ans=true;
  else if(rul==sz-1 && s[0]<97) ans=true;
  cout<<(ans==true?("SI"):("NO"));
  return 0;
}
//les fokin go