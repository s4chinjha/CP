#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string s) {

  /*
      for i = 0 -> n-1
          bal = 0
          for j = i -> n-1
              if(s[j] == '(')bal++
              else bal--

              if bal < 0
                currLen = 0
                else if bal>=0 currLen++
              bal == 0
                  maxLen = max(maxLen,currLen)

      return maxLen

  */

  int n = s.size();
  int bal = 0, maxLen = 0, currLen = 0;

  if (n == 0)
    return 0;

  for (int i = 0; i < n; i++) {

    bal = 0;

    for (int j = i; j < n; j++) {
      if (s[j] == '(')
        bal++;
      else
        bal--;

      if (bal < 0) {
        currLen = 0;
        break;
      }
      if (bal > 0 && j == n - 1) {
        currLen = 0;
        break;
      }

      if (bal == 0) {
        currLen = j - i + 1;
        maxLen = max(currLen, maxLen);
      }
    }
  }

  return maxLen;
}

int main() {

  string c;
  cin >> c;

  cout << longestValidParentheses(c);

  return 0;
}
