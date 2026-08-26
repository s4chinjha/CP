//17 oct --> 8:45 am 1Hr
//18 Oct --> 9:15 Am-11:24Am{+1:45hr}   1:25Pm-1:50Pm {+25min} --> 2:00 Hr


//What is recursion ?
//When a function calls itself until a specified condition is met.
//base condition --> the condition to stop function from executing infintely.


#include<bits/stdc++.h>
using namespace std;
// A example 
//i learned that i cannot use count as a global varible name
//Using count as a global variable name shadows the standard function std::count() from <algorithm>
//stack overflow and Recursion Tree
int cnt=0;
void print_num(){
	if (cnt == 4) return;
	cout << cnt << endl;
	cnt++;
	print_num();
}
//Problem Practice 1
void printname(){
	string name = "Sachin";
	if (cnt==5) return;
	cout << name << endl;
	cnt++;
	printname();
}
void printlinear(int n){
	if(cnt==n+1) return;
	cout << cnt << " ";
	cnt++;
	printlinear(n);
}
void revprintlinear(int n){
	if (cnt == n) return;
	cnt++;
	revprintlinear(n);
	int num = cnt;
	cout << cnt << endl;
	cnt--;
}
//Back Tracking simply means not using +1 but we can use -1
void printlinearbacktrack(int i, int n){
	if(i<1)return;
	printlinearbacktrack(i-1,n);
	cout << i << endl;
}
void revprintlinearbacktrack(int i, int n){
	if(i<1)return;
	cout << i << endl;
	i--;	
	revprintlinearbacktrack(i,n);
}
//Mw
void printsum (int i,int n,int s){
	if(i>n) return;
	printsum(i+1,n,s+i);
	if(i==n) cout << s;
	
}
//Tufw
void print_sum(int i,int sum){
	if(i<1){
		cout<< sum <<endl;
		return;
	}
	print_sum(i-1,sum+i);
}
int print_funct(int n){
	if(n==0) return 0;
	return n+print_funct(n-1);	
}
int fact(int n){
	if(n==0) return 1;
	return n*fact(n-1);
}
//tuf for me +1
void swaparr(int arr[],int i,int n){
	if (i>= n/2)return;
	swap(arr[i],arr[n-i-1]);
	swaparr(arr,i+1,n);
}
//check a str for pallindrome
// need to work on string properites and how to perform them +1
bool strpall(int i,string &s){
	if(i>= s.size()/2) return true;
	if(s[i] != s[s.size()-i-1]) return false;
	return strpall(i+1,s);	
}
//1:40
// Fibonacci Search
int fib(int n){
	if(n<=1)return n;
	int last = fib(n-1);
	int slast = fib(n-2);
	return last+slast;
}

int main(){
	//fibonacci search
	// cout << fib(9);
	//check a str for pallindrome
	// string s= "madam";
	// cout << strpall(0,s);
	//Reverse an array

	// int n;cin>>n;
	// int arr[n]; int f,l;
	// for(int i=0;i<n;i++){
	// 	cin>> arr[i];
	// }
	// swaparr(arr,0,n);

	// for(int i=0;i<n;i++){
	// 	cout << arr[i] << " ";
	// }

	// Prev ones

	// int sum =0;
	// print_sum(n,sum);
	// cout << print_funct(n);
	
	
	return 0; 
}
