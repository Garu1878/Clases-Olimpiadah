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
  int n,q,k;
  cin>>n>>q;
  int arr[n]={0};
  for(int i=0;i<q;i++){
    cin>>k;
    arr[k]++;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}
//les fokin go