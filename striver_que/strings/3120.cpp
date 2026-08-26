#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int numberOfSpecialChars(string word) {
    int n = word.size();int cnt = 0;
    
    unordered_set<char> w;

    for(int i = 0;i<n;i++){
        char ch = word[i];
        w.insert(ch);
    }
    // for (const auto& element : w) {
    //     cout << element << " ";
    // }

    for(char c = 'a';c < 'z';++c){        
        char ch = toupper(c);        
        if(w.find(c) != w.end() && w.find(ch) != w.end()){
            cnt++;
        }
    }
    return cnt;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string word;cin>>word;
    cout << numberOfSpecialChars(word);
}