#include<iostream>
using namespace std;

int solve(){
  int n,m,cnt=0;
  cin>>n>>m;
  
  while(m!=0){
    int rem;
    rem=n%m;
    m=rem;
    cnt++;
  }
  return cnt;
}

int main(){
  cout <<solve();
  return 0;
}