#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;


    int strStr(string haystack, string needle) {

        int n = haystack.size();
        int m = needle.size();

        int firstIndex = 0;
        int tempm = m;
                    if(haystack[0] == needle[0] && n ==1){
                return 0;
            }
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {

                firstIndex = i;

                while (haystack[i] == needle[j] && i<n ) {
                    if(i<n){
                        i++;
                    }                
                    j++;
                    m--;
                }
                if (m == 0) {
                    return firstIndex;
                }
            }
        }

        return -1;
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string n,m;
    cin>>n>>m;
    cout << strStr(n,m);
}