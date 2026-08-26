#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// void solve() {
//     int n;
//     cin >> n;
// }

//A palindrome is a word which is read same from backwards
bool isPallindrome(string &temp){
    //starting index 

    int i=0;int j = temp.size()-1;

    while(i<j){

        if(temp[i] != temp[j])return false;

        i++;j--;
        
    }

    return true;
}
string longestPalindrome(string s) {
    // Take a string input
    int n = s.size();

    string ans ="";

    for(int i = 0;i<n;i++){

        string temp = "";
        for(int j =i;j<n;j++){
            temp += s[j];//store the string from i to j index
            //check for pallindrome

            if(isPallindrome(temp) && temp.size()>ans.size()){
                ans = temp;
            }
        }
    }
    return ans;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--)
    string s;cin>>s;
    cout << longestPalindrome(s);
}