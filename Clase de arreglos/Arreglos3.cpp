#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int amiguito[8];
    for (int i=0; i<8; i++){
        cin>>amiguito[i];
    }
    for (int i=0; i<8; i++){
        if(i%3==0){
            cout<<"\n";
        }
        cout<<amiguito[i]<<" ";
    }
   
    return 0;
}