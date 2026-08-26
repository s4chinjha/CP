#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

void solve() {
    int n;
    cin >> n;

    //outer loop
    // 3 var for space coordinates

    int x=0,y=0,z=0;

    for(int i =0;i<n;i++){


        for(int i=0;i<3;i++){
            
            int arr[3];
            cin >> arr[i];

            if(i == 0){x= x+arr[i];}

            if(i == 1){y= y+arr[i];}

            if(i== 2){z= z+arr[i];}
        }
    }

    if(x == 0 && y==0 && z==0){
        cout << "YES";
    }
    else{

    cout << "NO";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();
}