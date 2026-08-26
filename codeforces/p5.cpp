#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// void solve() {
//     int n;cin >> n;
//     int k;cin>>k;

//     int cnt = 0;

//     vi kth(n);

//     int comp;
//     for(int i =0;i<n;i++){

//         comp = kth[i]
//         cnt++;

//         //edge when not +ve or 0

//         if(i == k){
//             kth = 
//         }
//     }
// }

int solve1(){

    // the number of paricipants
    int n;cin >>n;

    int k;cin>>k;

    //the pos of the kth element
    int i;vi list;int kth_num;
    while(n>0){


        cin >> i;
        if(i>0){
            list.push_back(i);
        }
        n--;
    }

    //edge case if the list is empty a no one is +ve

    // if(list.empty()){

    //     return 0;
    // }

    //loop to check the 
    //last element index till all has to be moved to next round
    int cnt = 0;
    for(int j:list){
        // cout << j << " ";
        if(k == cnt){
            kth_num = j;
        }

        cnt++;
    }

    //just compare the no. next to each other
    cnt =0;
    for(int i:list){

        if(cnt>k && list[cnt+1] != kth_num){
            return cnt;
        }cnt++;
    }

    return 0;
}

int solve2tuff() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int kth_score = a[k-1];

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] >= kth_score && a[i] > 0) {
            count++;
        }
    }

    return count;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout << solve2tuff();
}