#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    
    //take the string 3+2+1 as input
    string s;cin>>s;

    //skip 1 '+' and compare
    //s[0] and s[2]
    string temp;

    for(int i =0;i<s.size();i++){


        if(s[i] != '+'){
            temp += s[i];
        }
    }

    sort(temp.begin(),temp.end());
    // int num;
    // stringstream ss(temp);
    // ss >> num;
    int j = 0;
    for(int i =0;i<s.size();i = i+=2){

        s[i] = temp[j];
        j++;
    }

    cout<< s;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}