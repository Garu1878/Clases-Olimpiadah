#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int nums[5];
    int x=0;
    
    /*for(int i=0; i<5; i++){
        cin>>nums[i];
    }*/
    
    nums[0]=25;
    nums[1]=80;
    nums[2]=8;
    nums[3]=2;
    nums[4]=33;
    
    nums[4] = nums[2] + nums[3];
    
    cout<<nums[4]<<"\n\n";
    
    for(int i=0; i<5; i++){
        x += nums[i];
        // x = x + nums[i];
    }
    
    cout<<x;
    
    return 0;
}
