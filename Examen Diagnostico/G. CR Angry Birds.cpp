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
  int ac=0;
  while(cin>>k){
    if(k=="ooo") ac+=3;
    else if(k=="oo-") ac+=2;
    else if(k=="o--") ac+=1;
  }
  cout<<ac;
  return 0;
}
//les fokin go