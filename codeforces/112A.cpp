#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int solve(){
    //2 strings
    string s1,s2;cin >> s1>>s2;

    // LEXICOGRAPHICAL ORDER 

    //condn
    //s1<s2 print -1
    //s1>s2 print 1
    //s1=s2 print 0

    //Case is not taken into consideration

    // for (char& c : s1) {
    //     c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
    // }

    // for (char& c : s2) {
    //     c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
    // }

    for (char &c : s1) {
    if (isupper(c))
        c = tolower(c);
    }
    for (char &c : s2) {
    if (isupper(c))
        c = tolower(c);
    }

    for(int i =0;i<s1.size();i++){

        if(s1[i] < s2[i]){
            return -1;
        }
        else if(s1[i] > s2[i]){
            return 1;
        }      
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << solve();
}