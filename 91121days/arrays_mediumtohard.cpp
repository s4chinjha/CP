//07.11.25
//restarting from 
//RE:13 07.11.25 --> tuf DSA restart 4:15am-6:00am
//RE:14 08.11.25 5:30am-6:40am 1:10hr RUN 9:20am
//RE:15 09.11.25 9:50am
//RE:16 10.11.25 5:00am
//RE:17 11.11.25 4:30am
//Re:18 14.11.25 3:25am
//RE:19 15.11.25 7:30Pm


#include<bits/stdc++.h>
using namespace std;

//brute longest consequent subsequence
bool ls(vector<int> &a,int next){ //linear search function
	int n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]==next) return true;
	}
	return false;
}
// Time complexity (T.C.) = O(N^2) & S.C. = O(1)
int longsubs(vector<int> &a){	
	int longest=1;
	int n=a.size();
	for(int i=0;i<n;i++){
		int x=a[i];
		int cnt=1;
		while(ls(a,x+1) == true){ // instead of a function use a loop
			x=x+1; 				  // to check for the next num
			cnt=cnt+1;
			longest= max(longest,cnt);
		}
	}return longest;
}
//better
int betterlongsubs(vector<int> &a){
	int n =a.size();
	if(n==0) return 0;
	sort(a.begin(),a.end());
	int lastsmall =INT_MIN,longest=1,cntcurr=0;
	for(int i=0;i<n;i++){
		if(a[i]-1==lastsmall){
			cntcurr+=1;
			lastsmall= a[i];
		}
		//else if(a[i] == lastsmall){} //nothing to do we can remove this 
		else if(a[i] != lastsmall){
			cntcurr=1;
			lastsmall=a[i];
		}
		longest=max(longest,cntcurr);

	}return longest;

}
//optimal
//st.end() points to the place just after the last element
int optlongestsubs(vector<int> &a){
	int n=a.size(),longest=1;
	if(n==0) return 0;
	unordered_set<int> st;
	for(int i=0;i<n;i++){
		st.insert(a[i]);
	}

	for(auto it: st){
		if(st.find(it-1)==st.end()){
			int x=it;int cnt=1;
			while(st.find(x+1)!=st.end()){
				cnt+=1;
				x+=1;
			}longest =max(longest,cnt);
		}
	}
	return longest;
}
//08.11.25
//Set Matrix Zeroes 
// brute force

// better PS: IN THE LEETCODE PROBLEM THERE IS ONLY MATRIX PROVIDED
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix,int n,int m){
	int row[n] = {0};
	int col[m] = {0};
	//mark the row and col of the elements that have '0'.
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;	
			}
		}
	}
	//set the marked row and col elements as 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i] || col[j]){
				matrix[i][j]=0;
			}	
			
		}
	}
	return matrix;
}
//optimal //9.11 11:15am done
// vector<vector<int>> optimalzeroMatrix(vector<vector<int>> &matrix,int n,int m){
// 	// int col[m] = {0}; -> matrix[..][0]
// 	// int row[n] = {0}; -> matrix[0][..]	
// 	//mark the row and col of the elements that have '0'.

// //For leetcode solution there the function is type of void
// 	int n = matrix.size(); //rows
//     int m = matrix[0].size(); //columns

// 	int col0=1;
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			if(matrix[i][j]==0){
// 				//mark the i-th row
// 				matrix[i][0]=0;
// 				//mark the j-th column
// 				if(j!=0){				
// 				matrix[0][j]=0;}
// 				else
// 					col0=0;
// 			}
// 		}
// 	}
// 	//set the marked row and col elements as 0;
// 	for(int i=1;i<n;i++){
// 		for(int j=1;j<m;j++){
// 			if(matrix[i][j]!=0){
// 				//check for row & col
// 				if(matrix[0][j] == 0 || matrix[i][0] == 0){
// 					matrix[i][j] = 0;

// 				}

// 			}	
			
// 		}
// 	}

// 	//check for the row and col used for marking
// 	if(matrix[0][0] == 0){
// 		for(int j=0;j<m;j++) matrix[0][j]=0;
		
// 	}
// 	if(col0 ==  0){
// 		for(int i=0;i<n;i++) matrix[i][0]=0;
		
// 	}
// 	return matrix;
// }

//Rotate Matrix/Image by 90 Degrees //Leet 48 12.05pm
void rotate(vector<vector<int>>& mat) {
	int n = mat.size(); //size of row (n*n  matrix)
	//TRANSPOSE OF THE MATRIX
	for(int i = 0;i < n-2;i++){
		for(int j = i+1;j < n-1;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	//REVERSE THE ROWS
	//We can use the vector property and reverse it easily
	//in other lang. use 2 pointer approach
	//reverse every  ROW and get the ans;
	for(int i = 0;i < n;i++){
		reverse(mat[i].begin(),mat[i].end());
	}
}
//Spiral Matrix Done at 3:16Pm
//one solution only //Leet 54
///This check 1. Implementation 2. Is the Code clean
vector<int> spiralmatrix(vector<vector<int>> &mat){
	int n=mat.size();
	int m=mat[0].size();
	int left=0,right=m-1,top=0,bottom=n-1;
	vector<int> ans;

	while(top <= bottom && left <= right){
		//right
		for(int i = left;i <= right;i++ ){
			ans.push_back(mat[top][i]);
		}top++;

		//bottom
		for(int i =top;i <= bottom;i++ ){
			ans.push_back(mat[i][right]);
		}right--;

		if(top <= bottom){
			//left
			for(int i = right;i >= left;i--){
				ans.push_back(mat[bottom][i]);
			}bottom--;
		}

		if(left <= right){
			//top
			for(int i = bottom;i >= top;i-- ){
				ans.push_back(mat[i][left]);
			}left++;
		}
	}

	return ans;
}
//Count Subarray sum = k //10.20pm-45pm //Leet 560
int subarraySum(vector<int>& a, int k){
	int prefixSum = 0,cnt = 0;
	map <int,int> mpp;
	mpp[0] = 1;

	for(int i = 0;i < a.size();i++){
		prefixSum += a[i];
		int remove = prefixSum - k;
		cnt += mpp[remove];
		mpp[prefixSum] += 1;
	}
	return cnt;
}
//Pascal Triangle | Finding nCr in minimal time 11.11.25
//Function to generate one row
vector<int> generateRow (int row){
	long long ans = 1;
	vector<int> ansRow;
	ansRow.push_back(1);
	for(int col =1;col<row;col++){
		ans = ans*(row-col);
		ans = ans/col;
		ansRow.push_back(ans);
	}
	return ansRow;
}
vector<vector<int>> pascalTriangle(int N){
	vector<vector<int>> ans;
	for(int i=1;i<=N;i++){
		ans.push_back(generateRow(i));
	}
	return ans;
}
//Majority Element II | Brute-Better-Optimal 9:40am-11:20am br 
//Leet 229
// vector<int> majelement(vector<int> arr){
// 	vector<int> ans;
// 	map<int,int> mpp;
// 	int min = (int)(n/3)+1;//floor
// 	for(int i=0;i<a.size();i++){
// 		mpp[arr[i]]++;
// 		if(mpp[arr[i]]==min) ans.push_back(arr[i]);
// 	}
// 	return ans;
// }
//optimal 1:10Pm-
// vector<int> optmajelement(vector<int> arr){
// 	int cnt1=0,cnt1=0,el1=INT_MIN,el2=INT_MIN;
// 	vector<int> ls;
// 	for(int i=0;i<n;i++){
// 		if(cnt1==0 && el2!=a[i]){
// 			el1=a[i];
// 			cnt1 +=1;
// 		}
// 		else if(cnt2==0 && el1!=a[i]){
// 			el2=a[i];
// 			cnt2+=1;
// 		}
// 		else if(el1==a[i]){
// 			cnt1++;
// 		}
// 		else if(el2==a[i]){
// 			cnt2++;
// 		}
// 		else
// 			cnt1--;cnt2--;
// 	}
// 	int min=(int)(n/3)+1;
// 	cnt1=0,cnt2=0;
// 	//manual check
// 	for(int i=0;i<n;i++){
// 		if(el1==a[i]) cnt1++;
// 		if(el2==a[i]) cnt2++;
// 	}
// 	if(cnt1>=min) ls.push_back(el1);
// 	if(cnt2>=min) ls.push_back(el2);
// 	return ls;
// }
//3 Sum | Brute - Better - Optimal //14.11.25
//Brute
vector<vector<int>> threeSum(vector<int>& a){
	int n= a.size();
	
	set<vector<int>> st;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;j<n;j++){
				if(a[i]+a[j]+a[k]==0){
					vector<int> temp = {a[i],a[j],a[k]};
					sort(temp.begin(),temp.end());
					st.insert(temp);
				}

			}
		}
	}
	vector<vector<int>> ans(st.begin(),st.end());
	return ans;
}
//Better
// vector<vector<int>> threeSum(vector<int>& a){
// 	set<vector<int>> st;
// 	for(int i=0;i<n;i++){
// 		set <int> hashset;//after i++ hash sets to 0
// 		for(int j=i+1;j<n;j++){
// 			int third = -(a[i]+a[j]);
// 			if(hashset.find(third)!=hashset.end()){
// 				vector<int> temp = {a[i],a[j],third};
// 				sort(temp.begin(),temp.end());
// 				st.insert(temp);
// 			}
// 			hashset.insert(a[j]);

// 		}
// 	}

// 	vector<vector<int>> ans(st.begin(),st.end());
// 	return ans;
// }
//optimal 5:10am
// vector<vector<int>> threeSum(vector<int>& a){
// 	int n = a.size();
// 	sort(a.begin(),a.end());//to sort the array
// 	vector<vector <int>> ans;	
// 	for(int i=0;i<n;i++){
// 		if(i>0 && a[i]==a[i-1]) continue;//prev is not same, we need unique
// 		int j=i+1;
// 		int k=n-1;
// 		while(j<k)//so that the ans is sorted and unique
// 		{
// 			int sum = a[i]+a[j]+a[k];
// 			if(sum<0){
// 				j++;
// 			}
// 			else if(sum>0){
// 				k--;
// 			}
// 			else{
// 				vector<int> temp={a[i],a[j],a[k]};
// 				ans.push_back(temp);
// 				j++;
// 				k--;
// 				while(j< k &&a[j]==a[j-1]) j++;
// 				while(j < k &&a[k]==a[k+1]) k--;
// 			}
// 		}
// 	}

// 	return ans;
// }

//15.11.25
//4Sum
//better
// vector<vector<int>> fourSum(vector<int>& a, int target) {
//         set<vector<int>> st;
//         int n =a.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 set<long long> hashset;
//                 for(int k=j+1;k<n;k++){
//                     long long sum = a[i]+a[j];
//                     sum += a[k];
//                     long long fourth = target-sum;
//                     if(hashset.find(fourth)!=hashset.end()){
//                         vector<int> temp = {a[i],a[j],a[k],(int)fourth};
//                         sort(temp.begin(),temp.end());
//                         st.insert(temp);
//                     }
//                     hashset.insert(a[k]);
//                 }
//             }
//         }
//         vector<vector<int>> ans(st.begin(),st.end());
//         return ans;       
//   }
  //optimal
  vector<vector<int>> fourSum_optimal(vector<int>& a, int target) {
  	int n = a.size();
  	vector<vector<int>> ans;
  	sort(a.begin(),a.end());//sorting the array beforehand
  	for(int i =0;i<n;i++){
  		// make sure i is diff from before
  		if(i>0 && a[i]==a[i-1]) continue;//i++ skips anything else// no duplicates

  		for(int j=i+1;j<n;j++){
  			//same for j
  			if(j> i+1 && a[j]==a[j-1]) continue;// no duplicates

  			int k = j+1;
  			int l = n-1;

  			while(k<l){
  				long long sum = a[i];
  				sum += a[j];
  				sum += a[k];
  				sum += a[l];
  				if(sum == target){
  					vector<int> temp = {a[i],a[j],a[k],a[l]};
  					ans.push_back(temp);
  					k++;
  					l--;  
  					while(k<l && a[k]==a[k-1]) k++;
  					while(k<l && a[l]==a[l+1]) l--;
  				}
  				else if(sum<target){
  					k++;
  				}
  				else{
  					l--;
  				}

  			}
  		}
  	}
  	return ans;
  }
//Largest Subarray with Zero Sum | Amazon | MMT //12:00pm
  int maxLen(int a[	],int n){
  	int sum =0;
  	int cnt =0;
  	unordered_map<int,int> mpp;
  	for(int i = 0; i < n ; i++){
  		sum += a[i];
  		if(sum == 0){
  			cnt = i+1;
  		}
  		else{
  			if(mpp.find(sum) != mpp.end()){
  				cnt = max(cnt,i-mpp[sum]);
  			}
  			else{
  				mpp[sum] = i;
  				}
  		}
  	}
  	return cnt;
  }

int main(){
	
	//Largest subarray with 0 sum
	int n=7;
	int a[n] ={1,-1,-2,4,5,6,-8};	
	cout << maxLen(a,n);
	

	//4 sum optimal
	//striver's main code
	// vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    // int target = 9;
    // vector<vector<int>> ans = fourSum_optimal(nums, target);
    // cout << "The quadruplets are: \n";
    // for (auto it : ans) {
    //     cout << "[";
    //     for (auto ele : it) {
    //         cout << ele << " ";
    //     }
    //     cout << "] ";
    // }
    // cout << "\n";
	//4sum
	// vector<int> a;
	// int x;int target;
	// while(cin>>x) a.push_back(x);
	// fourSum_optimal(a,target);
	//3 Sum
	// vector<int> a;
	// int x;
	// while(cin>>x) a.push_back(x);
	// threeSum(a);
	
	//Majority Element II
	//brute //better //optimal

	///Pascal Triangle
	// int N;cin>> N;
	// vector<vector<int>> ans = pascalTriangle(N);

	//Count Subarray sum = k
	// vector<int> a;
	// int x;int k;cin >>k;
	// while(cin>>x) a.push_back(x);
	// cout << subarraySum(a,k);

	//Spiral Matrix


	//Rotate Matrix/Image by 90 Degrees


	//better set zero Matrix
	// int RR,CC;cin>>RR>>CC;
	// vector<vector<int>> matrix(RR, vector<int>(CC));
	// for(int i=0;i<RR;i++){
	// 	for(int j=0;j<CC;j++){
	// 		cin>>matrix[i][j];	
			
	// 	}
	// }
	// optimalzeroMatrix(matrix,RR,CC);

	// for(int i=0;i<RR;i++){
	// 	for(int j=0;j<CC;j++){
	// 		cout << matrix[i][j] << " ";	
			
	// 	} cout<<endl;
	// }
	

	//brute longest subsequence 7.11
	// vector<int> a;
	// int x;
	// while(cin>>x) a.push_back(x);
	// cout << optlongestsubs(a);
	return 0;
}