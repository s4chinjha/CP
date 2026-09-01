#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int trap(vector<int> &height) {
    int waterLogged = 0;
    int n = height.size();

    if (height.empty())
      return 0;
    // prefixMax
    vector<int> prefixMax;
    prefixMax.push_back(height[0]);
    for (int i = 1; i < n; i++) {
      if (prefixMax[i - 1] > height[i]) {
        prefixMax.push_back(prefixMax[i - 1]);
      } else {
        prefixMax.push_back(height[i]);
      }
    }
    // suffixMax
    vector<int> suffixMax;
    suffixMax.push_back(height[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
      if (suffixMax.back() > height[i]) {
        suffixMax.push_back(suffixMax.back());
      } else {
        suffixMax.push_back(height[i]);
      }
    }

    reverse(suffixMax.begin(), suffixMax.end());

    // now iterate over the loop and calculate the waterLogged
    for (int i = 0; i < n; i++) {
      waterLogged += min(prefixMax[i], suffixMax[i]) - height[i];
    }
    return waterLogged;
  }
};
