#include <bits/stdc++.h>
using namespace std;

// Main Function

/*
    Algorithm:

    Steps

    1. push in the stack i find a "]"
    2. then, start poping until we get "[" , also store the string in
   between(body)
    3. pop k and push k*body
    4. repeat
*/

string decodeString(string s) {

    stack<char> st;
    int i = 0;

    for (char ch : s) {

        if (ch != ']') {
            st.push(ch);
        } else {
            string body = "";
            while (!st.empty() && st.top() != '[') {
                body += st.top();
                st.pop();
            }
            reverse(body.begin(), body.end());

            st.pop();

            string numStr = "";

            while (!st.empty() && isdigit(st.top())) {
                numStr += st.top();
                st.pop();
            }

            reverse(numStr.begin(), numStr.end());

            int k = stoi(numStr);

            while (k--) {

                for (char ch : body) {
                    st.push(ch);
                }
            }
        }
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {

    decodeString("3[a]2[bc]");

    return 0;
}