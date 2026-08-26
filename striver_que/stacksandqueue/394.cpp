#include<bits/stdc++.h>

using namespace std;

    string multstr(string s,int cnt){
        string ans = "";
        while(cnt > 0){
            ans += s;
            cnt--;
        }

        return ans;
    }

    string decodeString(string s) {

        // 3[a2[b]]
        /*
            1. look for first ]
            2. go back and find [
            3. store the string between them "b" here
            4. store the count 2
            5. send to a func(count,string) 
            6. the func() returns bb
            7. replace this 2[b] with bb
            8. repeat until we find no ]

        */

        //find the first ]

        int i = 0,j=0,cnt=0;char ch = ']';
        while(s[i] != ch){
            i++;
        }
        j = i;
        //find the [
        ch = '[';
        while(s[i] != ch){
            i--;
        }
        string sub;
        sub = s.substr(i+1,j-1);

        char num = s[i-1];

        cnt = num - '0';

        string add= multstr(sub,cnt);

        int length = j-i+1;
        s.replace(i-1,length,add);

        return s;

    }


int main(){

    cout << decodeString("3[a2[b]]");

    return 0;
}

//corrected

#include <bits/stdc++.h>
using namespace std;

string multstr(string s, int cnt) {
    string ans = "";
    while (cnt > 0) {
        ans += s;
        cnt--;
    }
    return ans;
}

string decodeString(string s) {
    // Keep decoding as long as there is a closing bracket ']'
    while (s.find(']') != string::npos) {
        
        // 1. Find the FIRST closing bracket ']'
        int j = s.find(']');

        // 2. Go backward to find its matching '['
        int i = j;
        while (s[i] != '[') {
            i--;
        }

        // 3. Extract the inner string body (between i and j)
        string sub = s.substr(i + 1, j - i - 1);

        // 4. Find the full number before '['
        int numStart = i - 1;
        while (numStart >= 0 && isdigit(s[numStart])) {
            numStart--;
        }
        numStart++; // Move back to the start of the number
        
        int cnt = stoi(s.substr(numStart, i - numStart));

        // 5. Multiply string
        string add = multstr(sub, cnt);

        // 6. Replace "k[sub]" with "add"
        int totalLength = j - numStart + 1;
        s.replace(numStart, totalLength, add);
    }

    return s;
}

int main() {
    cout << decodeString("3[a2[b]]") << endl; // Output: abbabbabb
    return 0;
}