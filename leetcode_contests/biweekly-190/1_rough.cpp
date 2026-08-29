#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int minBishopMoves(vector<int> &source, vector<int> &target) {

    int diff1 = abs(target[0] - target[1]);
    int diff2 = abs(source[0] - source[1]);

    int sr0 = source[0] - target[0];
    int sr1 = source[1] - target[1];

    int ans = 0;

    if (source[0] == target[1] && source[1] == target[0]) {
      return 1;
    }
    if (diff1 == 0 && diff2 == 0) {
      return 1;
    }
    if (diff1 == 0 && diff2 % 2 == 0 || diff1 % 2 == 0 && diff2 == 0) {
      if (sr0 - sr1 == 0) {
        return 1;
      } else {
        return 2;
      }
    }
    if (diff1 % 2 == 0 && diff2 % 2 == 0) {
      return 2;
    }
    // blacks diff should be odd
    if (diff1 % 2 != 0 == diff2 % 2 != 0) {
      if (sr0 - sr1 == 0) {
        return 1;
      } else {
        return 2;
      }
    }

    return -1;
  }
};
