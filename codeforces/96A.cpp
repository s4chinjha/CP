#include <bits/stdc++.h>
using namespace std;

string solve() {
    //String Players
    // Atleast 1 from one team 
    //Atleast 7 (consecutive) is dangerous Print "YES"
    //"0" of 1 team player ans "1" for another

    string s;cin>>s;
    int cnt =0;
    char lastcharseen = s[0];

    for(int i = 0; i < s.size() ;i++){
        if(lastcharseen == s[i]){
            cnt++;
        }
        else{
            cnt = 0;
            lastcharseen = s[i];
            cnt++;
        }        
        if(cnt>=7)return "YES";
    }
    return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << solve();
}