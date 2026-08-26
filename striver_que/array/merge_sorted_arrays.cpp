//Merge Sorted Arrays Without Extra Space 
//6:10 Pm-6:50pm
#include <bits/stdc++.h>
using namespace std;
//brute
class Solution{
	public:
		//21.11.25 6:14am
		void merge_brute(vector<int>& nums1, int m, vector<int>& nums2, int n){
			int left =0; int right = 0;int index=0;
			//when both have elements
			//we compare and push
			vector <int> nums3;
			while(left < n && right << m){
				if(nums1[left] <= nums2[right]){
					nums3[index] = nums1[left];
					index++; left++;
				}
				else{
					nums3[index] = nums2[right];
					index++; right++;
				}
			}
			//when left has more elements
			while(left<n){
				nums3[index++] = nums1[left++];
			}
			//when right has more elements
			while(right < m){
				nums3[index++] = nums2[right++];
			}
			//to push back in nums1 ans 2
			for(int i = 0;i < n+m; i++){
				if(i<n) nums1[i] = nums3[i];
				else{
					nums2[n-i] = nums3[i];
				}

			}
		}
//optimal1
		//7:00am
		void merge_optimal1(vector<int>& nums1, int m, vector<int>& nums2, int n){
			int left = m-1;
			int right = 0;
			while(left >= 0 && right < n ){
				if(nums1[left] > nums2[right]){
					swap(nums1[left], nums2[right]);
					left--;right++;
				}
				else{
					break;
				}
			}
			sort(nums1.begin(),nums1.end());
			sort(nums2.begin(),nums2.end());
		}

};

//optimal
//gap method and shell sorting
 void merge_optimal2ka1(vector<int>& nums1, int m, vector<int>& nums2, int n){
			int len = m + n;
	        int gap = (n / 2) + (len % 2);
	        // a while loop to check gap
	        while (gap > 0) {
	            int left = 0;
	            int right = left + gap;
	            // arr1 and arr2
	            // a while loop to check, right id not out of scope
	            while (right < len) {
	                if (left < m && right < len) {
	                    if (nums1[left] > nums2[right - n]) {
	                        swap(nums1[left], nums2[right - n]);
	                    }
	                }
	                // arr1 and arr1
	                else if (left < m && right < m) {
	                    if (nums1[left] > nums2[right]) {
	                        swap(nums1[left], nums2[right]);
	                    }
	                }
	                // arr2 and arr2

	                else {
	                    if (nums1[left - n] > nums2[right - n]) {
	                        swap(nums1[left - n], nums2[right - n]);
	                    }
	                }
	                left++;
	                right++;
	                if (gap == 1)
	                    break;
	                gap = (gap / 2) + (gap % 2);
	            }
	        }
    }

//optimal 2

 void merge_optimal2ka2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	           private:
	           swapIfgreater(vector<int>& nums1, int m, vector<int>& nums2, int n){
	            if(nums1[m]>num2[n]){
	                swap(nums1[m],num2[n]);
	            }
	           }
	           public:
	           int len = m+n;
	           int gap = (n/2) + (len%2);
	           //a while loop to check gap
	           while(gap > 0){
		           int left = 0;
		           int right = left+gap;
		           //arr1 and arr2
		           //a while loop to check, right id not out of scope
		           while(right < len){
			           if(left < m && right < len){
			            swapIfgreater(nums1,left,nums2,right-m);
			           }
			           //arr1 and arr1
			           else if(left < m && right < m){
			           	swapIfgreater(nums1,left,nums1,right)
			           }
			           // arr2 and arr2 

			           else{
			           	swapIfgreater(nums2,left-m,nums2,right-m)
			           }
			           left++;right++;
			           if(gap == 1) break;
			           gap = (gap/2) + (gap%2);
			       }
		       }
}

int main(){
	vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;

    Solution().merge_better(nums1, m, nums2, n);

    // Print merged array
    for (int num : nums1) cout << num << " ";
    for (int num : nums2) cout << num << " ";

    return 0;
}