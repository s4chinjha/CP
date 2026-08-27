#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //My implementation
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& arr) {
        vector<int> nle;
        stack<int> st;
        // Back Traversal
        for (int i = arr.size() - 1; i >= 0; i--) {
            // find all the smaller then currVal in the array
            while (!st.empty() && st.top() <= arr[i]) {
                st.pop();
            }

            if (st.empty()) {
                nle.push_back(-1);
            } else {
                nle.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(nle.begin(), nle.end());

        //to map the num1 values with the values we got in nle
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            auto it = find(arr.begin(), arr.end(), nums1[i]);
            int idx = it - arr.begin();
            ans.push_back(nle[idx]);
        }
        return ans;
    }
};
