#include <bits/stdc++.h>

using namespace std;
using vi = vector<string>;

void solve() {
    //no. of students;
    int n;cin >> n;
    //after time t to check the string
    int t;cin>>t;
    //students in the line
    string s;cin>>s;

    //check if at pos(i) there is a "B" and pos(i+1) there is a "G"
    //the position will be interchanged

    //acc to t


    // every +1 index takes 1 t
    
    string temp = s;

    for(int i =0;i<n;i++){
                //condn
        if(s[i] == 'B' && s[i+1] == 'G'){
            
            temp[i] = 'G';
            temp[i+1] = 'B';
                            
        }
            
    }

    cout << temp;


}

void solve1() {
    int n;cin >> n;int t;cin>>t;
    string s;cin>>s;


    //i was right t ig  //mistake 2
    while(t--){
    //mistake 1//  out of bounds (n-1)
        for(int i =0;i<n-1;i++){
                    //condn
            if(s[i] == 'B' && s[i+1] == 'G'){
                
                swap(s[i],s[i+1]);
                i++;//i was right abt this skip the next index //mistake 3
                                
            }
                
        }
    }


    cout << s;


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

     solve1();
}