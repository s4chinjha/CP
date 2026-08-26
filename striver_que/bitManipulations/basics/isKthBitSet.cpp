#include <bits/stdc++.h>
using namespace std;

bool isKthBitSet(int n, int k)
{   k--;
    if((n&(1<<k))!=0){
        return true;
    }
    else
        return false;
}

int main(){
    
    isKthBitSet(32,1)
    return 0;
}