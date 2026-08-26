//Hasing 1 hr
//1:50-4:27 {2:00 Hr}

#include<bits/stdc++.h>
using namespace std;

// int hashh[10000001];

int main(){
	//Numer Hashing

	// int n; cin >>n;
	// int arr[n];
	// for(int i=0;i<n;i++){
	// 	cin >> arr[i];
	// }

	// //precompute
	// int hash[13]={0};
	// for(int i=0;i<n;i++){
	// 	hash[arr[i]] += 1;
	// }

	// int q;cin >>q;
	// while(q--){
	// 	int numbers;
	// 	cin >> numbers;
	// 	//fetch
	// 	cout << hash[numbers] << endl;

	// }

	//Character Hashing
	// string s; cin >> s;

	// For small alphabets
	// int hash[26] = {0};
	// for(int i=0;i<s.size();i++){
	// 	hash[s[i]-'a']++;
	// }
	// int q;cin >> q;
	// while(q--){
	// 	char c; cin >>c;
	// 	cout << hash[c-'a'] << endl;
	// }
	//for capital+small alphabets
	// int hash[256] ={0};
	// for(int i=0;i<s.size();i++){
	// 	hash[s[i]]++;
	// }

	// //queries
	// int q;cin >> q;
	// while(q--){
	// 	char c;
	// 	cin >> c;
	// 	//fetch
	// 	cout<< hash[c] << endl;
	// }

	//using Maps
// 	int n;cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin >>arr[i];
// 	}

// 	//precompute by maps
// 	unordered_map<int,int> mpp;
// 	for(int i=0;i<n;i++){
// 		mpp[arr[i]]++;
// 	}

// 	//iterate in a map
// 	for(auto it: mpp){
// 		cout << it.first << "->"<< it.second << endl;
// }
// 	//queries
// 	int q;cin >>q;
// 	while(q--){
// 		int num;cin >>num;
// 		cout<< mpp[num] << endl;
// 	}

	//HW
	int n;cin>> n;
	int arr[n];
	map<int,int> mpp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mpp[arr[i]]++;
	}
	//iteator on map
	for(auto it:mpp){
		cout << it.first << "->" << it.second<< endl;
	}



	return 0;	
}
//Theory or points to be remembered
/*
Array of int data type declaresd inside of the Main can take values up to 1e6 but
globally take up to 1e7+1 and there value is intialized as 0 by default.

*/