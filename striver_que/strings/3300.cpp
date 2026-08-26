#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
    int minElement(vector<int>& nums) {

            vector<int> ans;

            for(int i=0;i<n;i++){
                string s="";
                s = to_string(nums[i]);

                for(int j=0;j<s.length();j++){

                    int num=0;
                    char ch= s[j];
                    num += ch-'0';
                    
                }ans.push_back(num);

            }

            int ans = min(ans.begin(),ans.end());
            return ans;
    }

int main(){


    vi nums;

    int n;cin>>n;
    cin>>nums.push_back(n);
    minElement(nums);

    return 0;
}