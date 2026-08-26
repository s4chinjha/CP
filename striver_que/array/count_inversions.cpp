//27.11.25
//8:00Pm

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	//Brute Force
	int inversionCount(vector<int> &arr) {
        
        int n =arr.size();

        int cnt = 0;
        
        for(int i = 0;i < n;i++)
        {
        	for(int j = i+1;j < n;j++)
        	{
        		if(arr[i] > arr [j])
        		{
        			cnt += 1;
        		}
        	}
        }

        return cnt;
        
    }

    //Optimal

    int inversionCount(vector<int> &arr) 
    {
    	int n = arr.size();




    }
};


int main()
{

	return 0;
}