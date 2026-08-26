#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    string n;
    cin >> n;
    string ans = "";
    
    //check for only first uppercase and rest lowercase

    for(int i=0;i<n.length();i++){
        char ch = n[i];
        if(i==0){
            ans+=(char)toupper(ch);
        }
        
        if(i>0){            
            ans+=(char)tolower(ch);
        }

    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}