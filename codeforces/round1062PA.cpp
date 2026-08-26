#include <bits/stdc++.h>
//15min takes
//29 May 26 
//11:00 AM
using namespace std;
using vi = vector<int>;

string solve() {

    //input the list

    vi a;
    
    for(int i =0;i<4;i++){
        int input;
        cin >> input;
        a.push_back(input);
    }

    //check

    int prev = a[0];
    for(int i = 1;i<4;i++){

        if(prev != a[i]){
            return "NO";
        }
        else{
            prev = a[i];
        }

    }

    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    cout << solve() << endl;
}