#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {

    int num = 0;
    int n = digits.size();

    for (int i = 0; i < n; i++) {

        num += (digits[i] * 10);
    }

    num += 1;

    vector<int> output;
    int rem = 0;
    string sz = to_string(num);
    int m = sz.length();

    for (int i = 0; i < m; i++) {

        rem = num % 10;
        output.push_back(rem);
        num /= 10;
    }

    // reverse(output.begin(), output.end());

    return output;
}

int main() {

    vector<int> input;
    int val;

    while (cin >> val) {
        input.push_back(val);
    }

    vector<int> result = plusOne(input);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
