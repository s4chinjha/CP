#include <bits/stdc++.h>
using namespace std;

void solve() {

    //take the year as input

    string i;cin>>i;

    vector<int> numbers;
    for (char c : i) {
        if (std::isdigit(c)) { // Check if character is a digit
            numbers.push_back(c - '0'); // Convert character to integer
        }
    }

    //check 

    for(int i: numbers){
        cout << i;
    }
    // int arr[4] = {0};
    // for(int i:arr){
    //     cin>>arr[i];
    //     cout<<arr[i];
    // }
    //example : 2013 
    //find: min >2013 with distinct nums

    //start from the right most num +1  chose from 0-9 - (already in the num) exhausted then move to next

}


void solve1(){
    //divide the number and check
    //whether all are different
    //and greater than the given num

    int n;cin>>n;int temp=n;
    int ans,cnt,m;
    int check=0;

    for(m = temp+1;m<=9000;m++){

        vector<int> arr;
        temp=m;

        for(int i=0;i<4;i++){

            int md =temp%10;
            arr.push_back(md);

            temp=temp/10;
        }
        reverse(arr.begin(),arr.end());


        //take a cnt of all the nums and if >2 then skip the num

        for(int i=0;i<4;i++){    

            ans = m;
            temp=ans;          

            temp=ans%10;

            cnt = count(arr.begin(),arr.end(),temp);
            if(cnt>1){
                check=0;
                break;
            }
            else{
                check++;
            }
            ans=ans/10;
        }
        if(check==4){
            cout<<m;
            break;  
        }
            
    }


}


void solve2(){
    int n;cin>>n;

    set<int> num;
    int temp,m=n+1;


    for(m;m<=9999;m++){
        temp=m;

        for(int i=0;i<4;i++){

            num.insert(temp%10);

            temp=temp/10;
        }

        if(num.size() == 4){
            cout<<m;
            break;
        }
        num.clear();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve2();
}