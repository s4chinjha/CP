#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;

    vi nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    //get the max
    sort(nums.begin(),nums.end());
    int maxNum = nums.back();
    int stepsTaken = 0;

    if(nums[0] == maxNum){
        cout << 0 << endl;
        return;
    }

    if(maxNum%2 == 0){
        stepsTaken = maxNum/2;
    }
    else{
        stepsTaken = (maxNum-1)/2;
    }

    int j=0;
    while(j<n){
        for(int i=0;i<n;i++){
            if(nums[i] < maxNum){
                nums[i]++;
            }
            else if(nums[i] > maxNum){
                nums[i]--;
            }
            else{
                continue;
            }
        }
        j++;
    }



    cout << stepsTaken<<endl;    
}

void solve1(){
    int n;cin >> n;

    vi nums(n);
    for(int i = 0;i < n;i++){
        cin >> nums[i];
    }

    int mx = *max_element(nums.begin(),nums.end());
    int mn = *min_element(nums.begin(),nums.end());

    int ans = (mx-mn+1)/2;
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve1();
}





class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
                    
        }

        return {0,0};
    }
};