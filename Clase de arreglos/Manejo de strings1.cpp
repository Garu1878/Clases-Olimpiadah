#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
    
    string s;
    char c;
    
    cin>>s;
    cin>>c;
    
    for(int i=0; i < s.size(); i++){
        if(s[i]==c){
            cout<<i<<"\n";
            //cout<<"Bazinga "<<i<<" !"<<nl;
        }
        
    }
    
    return 0;
}