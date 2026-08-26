#include <bits/stdc++.h>
using namespace std;

//Revising merge sort

class Solution 
{
public:

	void merge(vector<int> &arr,int low,int mid,int high)
	{
		int n = arr.size();

		vector <int> temp;

		int left = low;

		int right = mid+1;

		while(left <= mid && right <= high)
		{
			if(arr[left] <= arr[right])
			{
				temp.push_back(arr[left++]);
			}
			else{
				temp.push_back(arr[right++]);
			}
		}

		while(left <= mid)
		{
			temp.push_back(arr[left++]);
		}

		while(right <= high)
		{
			temp.push_back(arr[right++]);
		}
		//copy the values back to the original array from the temp array

		for(int i=low;i<=high;i++){
			arr[i] = temp[i-low];

		}
	}

	void mergeSort(vector<int> &arr,int low,int high)
	{
		//if low > high exit

		if(low>=high) return;

		int mid = (low+high)/2;

		//recursive call for left and right
		mergeSort(arr,low,mid);

		mergeSort(arr,mid+1,high);

		//to merge back

		merge(arr,low,mid,high);

	}
};



int main()
{	vector <int> arr = {2,4,5,8,1,2,45,67,8,85,77,88};
	Solution sol;
	sol.mergeSort(arr,0,arr.size()-1);

	for(int x : arr)
	{
		cout << x << endl;
	}
	return 0;
}
