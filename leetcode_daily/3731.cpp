#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingElements(vector<int> &nums) {

  int st = 0, end = 0;
  vector<int> ans;

  end = *max_element(nums.begin(), nums.end());
  st = *min_element(nums.begin(), nums.end());

  int idx = 0;
  sort(nums.begin(), nums.end());
  for (int i = st; i <= end; i++) {

    while (i != nums[idx]) {
      ans.push_back(i);
      i++;
    }
    idx++;
  }

  return ans;
}

int main() {

  vector<int> input;
  int val;

  while (cin >> val) {
    input.push_back(val);
  }

  vector<int> result = findMissingElements(input);

  for (int x : result) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
