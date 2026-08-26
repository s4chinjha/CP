#include <bits/stdc++.h>
using namespace std;

void solve() {

    //input front or back

    string s;cin>>s;
    //input 1 or 2
    int n;cin>>n;

    //print L or R

    if(s == "front"){
        if(n==1){
            cout << "L";
        }
        else{
            cout << "R";
        }

    }
    else{

        if(n==2){
            cout << "L";
        }
        else{
            cout << "R";
        }
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
}