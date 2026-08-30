#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int> &a, int n)
{
    vector<int> ans;
    stack<int> st;

    for(int i = 0; i < n;i++){

        while(!st.empty() && st.top() >= a[i]){
            st.pop();
        }

        if(st.empty()){
            ans.push_back(-1);
        }
        else if( st.top() < a[i]){
            ans.push_back(st.top());
        }

        st.push(a[i]);
    }

    return ans;
}
