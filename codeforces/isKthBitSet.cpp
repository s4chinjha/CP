#include <bits/stdc++.h>
using namespace std;

bool isKthBitSet(int n, int k)
{   
    cout << (1<<k);
    cout << n&(1<<k);
    
    if((n&(1<<k))==0){

        return 1;
    }
    else
        return 0;
}

int main(){
    
    isKthBitSet(32,1)
    return 0;
}