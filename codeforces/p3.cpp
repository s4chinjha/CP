#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

// void solve(int t) {

//     int solving = 0;

//     for(int i = 1; i <= t;i++){
//     int cnt=0;
//  vi ans(3);
//     for(int j =0;j<3;j++){
   
//     cin >> ans[j];}
//     for(int j =0;j<3;j++){
//     if(ans[j] > 0){
//         cnt++;
//     }
//     if(cnt == 2){
//         solving++;
//         continue;        
//     }
//     }
//     }
//     cout << solving;

// }

void solve1(){

    int n;cin >>n;
    int solving = 0;

    //outer loop
    for(int j = 0;j <n;j++){

        int arr[3];
        int cnt =0;

        //inner loop
        for(int i=0;i<3;i++){


            int input;
            cin >> input;

            arr[i] = input;

            if(arr[i] == 1){
                cnt = cnt + 1;
                // cout << cnt ;
                if(cnt == 2){
                solving = solving + 1;
                // cout << "sol"<< solving ;
                
            }
            }


            
        }
    }

    cout << solving;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve1();
}