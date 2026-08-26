#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// void solve() {

//     ll y,k,n;cin>>y>>k>>n;

//     //two condn fullfilling all values

//     //1 condn

//     ll xl = n-y;
    
//     if(xl <=0){
//         cout << "-1";

//     }

//     for(ll i = 1;i<=xl;i++){

//         ll sum = i+y;
//         if(sum%k == 0){
//             cout << i;
//             cout << " ";
//         }
//     }
// }

void optsolve() {

    ll y,k,n;cin>>y>>k>>n;
    
    //“When condition involves divisibility, iterate over multiples instead of checking all numbers.”

    
    /*
    xl = n-y 
    
    range of i was from 1 to xl

    sum = i+y check was sum%k == 0

    //instead

    i+y = multiple of k
    
    i+y = m*k

    i = m*k - y 
    so first valid multiplier

    m > y/k

    1 is m = y/k +1

    to last 
    from above we get i = m*k - y 
    i <= n-y

    solvind in m form we get 

    m*k <= n 

    */
    if (y >= n) {
        cout << -1;
        return;
    }

    ll start = (y/k )+1;

    bool found  = false;

    for(ll m = start; m*k <= n ;m++){
        
        ll mk = m * k;
        ll i = mk - y;
        cout << i << " ";
        found = true;

    }

    if(!found){
        cout << "-1";
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    optsolve();
}