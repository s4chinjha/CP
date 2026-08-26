
#include <bits/stdc++.h>
//11:09AM
//27 min

using namespace std;
using vi = vector<int>;


string solve1(){

	int n;cin>>n;

	string s,t;cin>>s>>t;

	sort(s.begin(),s.end());
	sort(t.begin(),t.end());

	if(s == t){
		return "YES";
	}

	return "NO";

	

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    	cout << solve1() << endl;
}