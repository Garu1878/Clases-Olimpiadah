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
  string s,se;
  cin>>s;
  cin>>se;
  if(s.size()!=se.size()){
    cout<<"Las cadenas tienen longitud diferente."<<nl;
    cout<<"Operacion Cancelada!"<<nl;
    return 0;
  }
  sort(s.begin(),s.end());
  sort(se.begin(),se.end());
  if(s==se){
    cout<<"SI es un ANAGRAMA!"<<nl;
  }
  else{
    cout<<"NO es un Anagrama!"<<nl;
  }
  return 0;
}
//les fokin go