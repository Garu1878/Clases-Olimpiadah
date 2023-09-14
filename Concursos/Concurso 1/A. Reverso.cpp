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
  stack<int> stk;
  int n,k;
  cin>>n;
  for(int x=0;x<n;x++){
    cin>>k;
    stk.push(k);
  }
  for(int x=0;x<n;x++){
    cout<<stk.top()<<" ";
    stk.pop();
  }
  return 0;
}
//les fokin go