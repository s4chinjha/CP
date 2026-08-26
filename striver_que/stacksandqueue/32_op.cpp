#include <bits/stdc++.h>
using namespace std;

int longestValidParenthesis(string s) {
  int n = s.size();
  stack<int> st;

  st.push(-1);
  int maxLen = 0;
  int currLen = 0;
  for (int i = 0; i < n; i++) {

    if (s[i] == '(') {
      st.push(i);
    } else {
      st.pop();

      if (st.empty()) {
        st.push(i);

      } else {
        currLen = i - st.top();
        maxLen = max(maxLen, currLen);
      }
    }

    if (s[i] == ')') {
      st.pop();
      st.push(i);
    } else {
      st.push(i);
    }

    if (s[st.top()] == '(' && s[i] == ')') {
      st.pop();
      currLen = i - st.top();
      maxLen = max(maxLen, i);
    }
  }

  return maxLen;
}

int main() {

  string c;
  cin >> c;
  cout << longestValidParenthesis(c);
  return 0;
}
