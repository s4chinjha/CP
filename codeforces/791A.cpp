#include <bits/stdc++.h>
using namespace std;


void solve() {
    int Limak,Bob;
    cin>>Limak>>Bob;

    int year = 0;

    //condition to stop until Limak weight is more than Bob

    while(Limak<=Bob){
        year++;
        Limak *= 3;
        Bob *= 2;
    }

    cout << year;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}