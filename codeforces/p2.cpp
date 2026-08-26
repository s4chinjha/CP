#include <bits/stdc++.h>

using namespace std;

void solve() {
    //take a string

    string w;cin >> w;

    int n = w.length();

    if(n <= 10){
        cout << w << "\n";
    }

    if(n > 10){
        int replace = n-2;


        char s1 = w[0];

        string m = to_string(replace);

        char l = w[n-1];

        cout << s1+m+l << "\n";
    }  

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}