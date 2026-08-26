#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {

    string s;cin>>s;
    unordered_set<char> str(s.begin(),s.end());

    int n = str.size();

    if(n%2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}