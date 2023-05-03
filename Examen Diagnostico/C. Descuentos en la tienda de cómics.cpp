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
  float c1,c2,d1,d2;
  cin>>c1>>c2;
  d1=c1*.1;
  d2=c2*.1;
  if(c1+c2>=100){
    cout<<"Habra descuento inicial para ambos"<<nl;
    c1-=d1;
    c2-=d2;
    if(c1!=c2){
      if(c1>c2){
        cout<<"Ademas, habra descuento especial para el primer comprador";
        c1-=d1;
      }
      else{
        cout<<"Ademas, habra descuento especial para el segundo comprador";
        c2-=d2;
      }
      cnl;
    }
  }
  else{
    cout<<"No habra descuento :("<<nl;
  }
  cout<<sp(2)<<c1<<" "<<c2;
  return 0;
}
//les fokin go