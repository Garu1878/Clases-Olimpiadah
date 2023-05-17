#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int nums[4];
    
    // [10] [] [] [] 
    //  0   1  2  3 
    
    nums[0]=10;
    
    for(int i=0; i<4; i++){
        cin>>nums[i];
    }
    
    for(int i=0; i<4; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}