//BS-4. Search Element in Rotated Sorted Array - I
#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int x) {
	int n = arr.size();

	int lo=0,hi=n-1;

	while(lo<=hi){
		int mid = (lo+hi)/2;
		if(arr[mid] == x ){ return mid;}

		//left sorted
		if(arr[mid] >= arr[lo]){

			if(arr[lo] <= x && x <= arr[mid]) hi = mid-1;

			else
				lo = mid+1;}
		
		//right sorted

		else
			if(x >= arr[mid] && x <= arr[hi]){ lo = mid+1;}

			else
				hi=mid-1;
	}return -1;

 }

int main(){

	int n;cin>>n;int x;cin>>x;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	cout << search(arr,x);

	return 0;
}