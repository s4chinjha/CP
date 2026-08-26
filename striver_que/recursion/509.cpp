#include <bits/stdc++.h>
using namespace std;


int fib(int n) {
    
    //BASE CONDN
    //i>1

    int ans = 0;
    if(n>1){
       return fib(n-1)+fib(n-2);
    }
    else if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }

    return 0;
}

int main(){

    int n;cin>>n;

    cout << fib(n);

    return 0;
}