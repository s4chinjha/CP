#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

void solve() {
    //no of lines to execute
    int n;
    cin >> n;

    int x = 0;

    while(n--){
        string statement;
        cin >> statement;
        if(statement == "++X"){

            ++x;

        }

        else if(statement == "X++"){
            x++;
        }

        else if(statement == "--X"){
            --x;
        }
        else{
            x--;
        }
    }

    cout << x;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}