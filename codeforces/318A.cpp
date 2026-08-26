#include <bits/stdc++.h>
using namespace std;
using ll =long long ;

// ll solve() {
//     ll n,k;cin>>n>>k;

//     //check if the n is odd or even

//     ll hfe,hfo,ans;

//     if(n%2 == 0){
//         hfe = n/2;
//     }
//     else{
//         hfo = n/2 + 1;
//     }

//     if(k <= hfe || k<=hfo){
//         ans = 2*k - 1;
//     }
//     else{
//         if(k > hfe )

//     }
// }

ll solve1(){
    ll n,k;cin>>n>>k;

    //take all the odd
    ll cnt = 0;
    for(ll i = 1;i<=n;i += 2){
        if(!i%2==0){
            cnt++;
        }

        if(cnt == k){
            return i;
        }
    }

    //all even

    for(ll i = 2;i<=n;i+=2){
        if(i%2==0){
            cnt++;
        }

        if(cnt == k){
            return i;
        }
    }

    return 0;
}

ll solve2(){
    ll n, k;
    cin >> n >> k;

    //for n is even or odd
    ll odd_count,ans;

    if(n%2 == 0){
        odd_count = n/2;

        if(k <= odd_count){
            return 2*k -1;
        }
        else{
            return 2*(k-odd_count);
        }

    }
    else{
        odd_count = (n+1)/2;
        if(k <= odd_count){
            return 2*k -1;
        }
        else{
            return 2*(k-odd_count);
        }
    }

    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << solve2();
}