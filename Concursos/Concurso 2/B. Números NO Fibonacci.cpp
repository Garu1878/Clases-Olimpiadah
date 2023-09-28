#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define cnl cout<<"\n"
#define nl "\n"
#define sp fixed<<setprecision
const int N=30005;

vector<int> fib(int n){
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  while(v[v.size()-1]<n){
    int dot=v.size()-1;
    v.push_back(v[dot]+v[dot-1]);
  }
  return v;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<int> f=fib(N);
  set<int> fi;
  for(auto i:f){
    fi.insert(i);
  }
  int n;
  cin>>n;
  for(int i=1;i<n;i++){
    if(fi.find(i)==fi.end()) cout<<i<<" ";
  }
  return 0;
}
//les fokin go