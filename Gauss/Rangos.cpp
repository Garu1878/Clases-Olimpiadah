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
  //Suma de Rangos por Gauss
  // 115+116+117+118+119+120
  int l,r;
  cin>>l>>r;
  //reducir para incluir el primer numero del rango en la suma
  l--;
  long long gauss;
  /*
  consiste en sacarle la suma de gauss a cada numero del rango
  y luego sacar la diferencia de los mismos
  diferencia de gauss r y l
  */
  gauss=( ((r*(r+1))/2) - ((l*(l+1))/2) );
  cout<<gauss<<nl;
  return 0;
}
//les fokin go