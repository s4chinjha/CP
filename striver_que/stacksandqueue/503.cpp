#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nge;

        int n = nums.size();
        stack<int> st;

        for (int i = ((2 * n) - 1); i > 0; i--) {

            // remove the smaller elements
            while (!st.empty() && nums[i % n] >= st.top()) {
                st.pop();
            }

            // push in nge that when <n
            if (i < n) {
                if (!st.empty()) {
                    nge.push_back(st.top());
                } else {
                    nge.push_back(-1);
                }
            }

            st.push(nums[i % n]);
        }
        reverse(nge.begin(), nge.end());

        return nge;
    }
};
