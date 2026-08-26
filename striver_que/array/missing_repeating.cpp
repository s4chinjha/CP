#include <bits/stdc++.h>
using namespace std;

//25.11.25
//11:20am
//Find the Missing and Repeating Number | 4 Approaches 🔥

//6:00 Pm 27.11.25
//optimal 3rd

//Brute GFG

class Solution
{	
public:
	vector <int> findTwoele_brute(vector<int> &arr)
	{
		vector <int> ans;

		int n = arr.size();

		int repeating = -1,missing = -1;

		for(int i = 1; i <= n;i++)
		{
			int cnt = 0; 
			for(int j = 0;j < n-1;j++)
			{
				if(arr[j] == i) {cnt++;}

				if(cnt == 2)
				{
					repeating = i;
				}
				else if(cnt == 0)
				{
					missing = i;
				}

				if(repeating != -1 && missing != -1) {break;}

				
			}
		}


		return {repeating,missing};
	}
//better
	vector <int> findTwoele_better(vector<int> &arr)
	{
		int n = arr.size();

		int hash[n+1] = {0};

		for(int i=0; i<n; i++)
		{
			hash[arr[i]]++;
		}

		int repeating = -1;
		int missing = -1;

		for(int i = 1; i <= n;i++)
		{
			
			if(hash[i]==2){
				repeating = i;
			}
			else if(hash[i]==0){
				missing = i;
			}

			if(repeating != -1 && missing != -1){
				break;}
		}

		return {repeating,missing};
	}
//6:00 Pm 27.11.25
//optimal 3rd
	vector <int> findTwoele_optimal(vector<int> &arr)
{
	//S - Sn = x-y
	//Let x-y = Val1


	//s*s - sn*sn = x*x - y*y
	// Sum of n natural nums = n*(n+1)/2
	// Sum of square of n natural no. = n*(n+1)*(2n+1)/6


	// Take everything as long long
	long long n = arr.size();

	long long S = 0,Sn,S2 = 0,S2n;

	Sn = n*(n+1)/2;
	S2n = n*(n+1)*(2*n+1)/6;

	for(int i = 0; i < n;i++)
	{
		S += arr[i];
		S2 += (long long)arr[i]*(long long)arr[i];
	}

	long long val1 = S - Sn;	 
	long long val2 = S2 - S2n;

	val2 = val2/val1;

	long long x = (val1 + val2) / 2;

	long long y = val2 - x;

	return {(int)x,(int)y};

}

};





int main()
{
	vector<int> nums = {3, 1, 2, 5, 4, 6, 7, 5};
    
    // Create an instance of Solution class
    Solution sol;

    vector<int> result = sol.findTwoele_optimal(nums);
    
    // Print the repeating and missing numbers found
    cout << "The repeating and missing numbers are: {" << result[0] << ", " << result[1] << "}\n";
	

	return 0;
}