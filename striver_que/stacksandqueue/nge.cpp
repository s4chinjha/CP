#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        vector<int> nle;stack<int> st;
        //Back Traversal
        for(int i = arr.size()-1;i>=0; i--){
            //find all the smaller then currVal in the array
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }

            if(st.empty()){
                nle.push_back(-1);
            }
            else{
                nle.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(nle.begin(),nle.end());
        return nle;

    }
};
