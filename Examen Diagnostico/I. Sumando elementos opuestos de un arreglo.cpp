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
  int arr[n]={0};
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n/2;i++){
    cout<<(arr[i]+arr[n-i-1])<<" ";
  }
  return 0;
}
//les fokin go