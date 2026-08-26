#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {

    //matrix
    int ans = 0;
    for(int i = 0;i <5;i++){
        for(int j = 0;j <5;j++){
            
            int x;cin>>x;

            if(x == 1){

                ans = abs(i-2)+abs(j-2);
            }
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}