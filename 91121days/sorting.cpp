//19.10.25 --> 1:00PM-1:10Pm , 4:40-9:14 --> 43 Min Video Yt
//i studied ig 1:30 hr //9:16- Slept
//20.10.25 Happy DIWALI
//Merge Sort video start (49min) //8:40 Am-9:24Am (1Hr)
//Quick Sort Video start (35Min) 10:10Am-11:35Am (1Hr) 
#include<bits/stdc++.h>
using namespace std;
//not understood completely
void selection_sort(int arr[],int n){
	for(int i=0;i<=n-2;i++){
		int mini = i;
		for(int j=i;j<=n-1;j++){
			if(arr[j]<arr[mini]){
				mini = j;
			}
		
		}
		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i]=temp ;
    }
}
void bubble_sort(int arr[],int n){
	for (int i=n-1;i>=1;i--){
		int didSwap=0;
		for(int j=0;j<=i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				didSwap=1;
			}
		}
		if(didSwap==0){
			break;
		}//cout << runs;
	}
}
void insertion_sort(int arr[],int n){
	for(int i=0;i<=n-1;i++){
		int j=i;
		while(j>0&&arr[j-1]>arr[j]){
			swap(arr[j-1],arr[j]);
			j--;
		}
	}
}

int main(){
	int n;cin >>n; int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	// selectioln_sort(arr,n);
	// bubble_sort(arr,n);
	insertion_sort(arr,n);

	for(int i=0;i<n;i++){
		cout<< arr[i] << " ";
	}

	return 0;
}