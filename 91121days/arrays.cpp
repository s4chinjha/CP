//20.10.25 HAPPY DIWALI	
// Arrays Start P1-4 11:40Pm-12:40Pm,br 1:15-2:15
// Arrays Part2 P5 VL->1:10  6:45Pm-
//20 min done

// DAY 0 starts

//RE: ZERO
//21.10.25 9:00Am-11:45AM break 2:50PM-4:40Pm (+4)  break 7:50Pm-8:35 br
//(RE: 1)22.10.25 11:00Am- 2:00Pm
//(RE:2)23.10.25 4:35Am-6:20Am (+1hr40min) break 8.45Am-9:25Am (+40)
//RE:3 24.10.25 7:20Am-8:32Am-9:32Am-
//RE:4 25.10.25 4:15Am-6:05 //(+1:50 hr) Jog0 8:45AM-9:10 br 11:45Am-12:22Pm-1:40 (+1:40 hr) 3:40Pm-4:25Pm (+50min)br 4:45pm-
//RE:5 26.10.25 6:10Am-7:40Am br 8:25Am-
//RE:7 27.10.25 8:30Am-
//RE:8 29.10.25 
//RE:9 30.10.25
//MANHWA BREAK 
//RE:10 04.11.25 -->ll
//RE:11 05.11.25 --> understanding how to make a linked list in C at 11:03Am
//RE:12 06.11.25 --> DS lastpart for midsem TREES 4:30-06:30am
//RE:13 07.11.25 --> tuf DSA restart 4:15am-6:00am

#include<bits/stdc++.h>
using namespace std;
//P1 FInd the largest element in the array
void largest_element(int arr[],int n){
	int largest=0;
	for(int i=1 ;i<n;i++) if(arr[i]>arr[largest]) largest=i;
	
	cout<< arr[largest];
}
//P2 SecondLargest
//better approach
void second_largest_better(int arr[],int n){
	int largest=0;int slargest = -1;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[largest]) largest=i;			
	}
	for (int i = 0; i < n; i++)
	{
	if(slargest < arr[i] && arr[i]!=arr[largest]){
			slargest = arr[i];
		}
	}
	cout << slargest;
}
//optimal approach
//understood
void second_largest_optimal(int arr[],int n){
	int largest=arr[0];
	int slargest=-1;
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			slargest=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>slargest){
			slargest=arr[i];
		}
	}
	cout << slargest;
}
//done by me
void second_smallest(vector<int> arr,int n){
	int smallest=arr[0];
	int ssmallest=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			ssmallest=smallest;
			smallest=arr[i];			
		}
		else if(arr[i]>smallest && arr[i]<ssmallest){
			ssmallest=arr[i];
		}
	}cout << ssmallest;
}
//P3 check if an array is sorted or not
bool issorted(vector<int> arr,int n){
	for(int i=1;i<n;i++){
		if(arr[i]>=arr[i-1]){

		}
		else return false;
	}
	return true;
}
//P4 remove duplicates from an sorted array
//Brute not done using "set" Data Structure -------->
int rmvdup(vector<int> arr,int n){
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i] != arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;

}
//P5 Left rotate the array by one place
void left_rotby1(vector<int> arr,int n){
	int temp = arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	for(auto it: arr){
		cout << it <<" ";
	}
}
vector <int> rotate_array(vector<int> &arr,int n){
	int temp = arr[0];
	for(int i=1;i<n;i++){
		arr[i-1]=arr[i];
	}
	arr[n-1]=temp;
	return arr;
}

// vector<int> roate_byd(vector<int> arr,int n,int d){
// 	int d;
// 	d = d%n;
// 	int temp[d];
// 	//storing values in temp array
// 	for(int i=0;i<d;i++){
// 		temp[i]=arr[i];
// 	}
// 	//shifting
// 	for(int i=d;i<n;i++){
// 		arr[i-d]=arr[i];
// 	}
// 	//putting temp elements to the back
// 	for(int i=n-d;i<n;i++){
// 		arr[n-d]=temp[i-(n-d)];
// 	}
// 	return arr;
// }
//brute force
void rotbyd(int arr[],int n,int d){
	d = d%n;
	int temp[d];
	//storing values in temp array
	for(int i=0;i<d;i++){
		temp[i]=arr[i];
	}
	//shifting
	for(int i=d;i<n;i++){
		arr[i-d]=arr[i];
	}
	//putting temp elements to the back
	for(int i=n-d;i<n;i++){
		arr[i/*(n-d)mistake*/]=temp[i-(n-d)];
	}
}

//how to write a reverse function
// void reverse(itn arr[],int start,int end){
// 	while(start<=end)
// 	{
// 		int temp = arr[start];
// 		arr[start]=arr[end];
// 		arr[end]=temp;
// 		start++;
// 		end--;
// 	}

// }
//optimal
void leftrotateoptimus(int arr[],int n,int d){
	reverse(arr,arr+d);
	reverse(arr+d,arr+n);
	reverse(arr,arr+n);
}
//P6 move all the zeroes to the back
//BRUTE FORCE
//not working error 124
// vector<int> zerotoback(vector<int> arr,int n){
// 	int nz;
// 	// int temp[]={0}; {MISTAKE}cannot use ".push_back" and ".size" on an normal array,
// 	//it should be an vector

// 	//store non-zeroes values in an temp array T.C => O(n)
// 	vector<int> temp;
// 	for(int i=0;i<n;i++){
// 		while(arr[i]!=0){
// 			temp.push_back(arr[i]);
// 		}
// 	}nz=temp.size();
// 	//non-zeroes values to the front T.C => O(nz)
// 	for(int i=0;i<nz;i++){
// 		arr[i]=temp[i];
// 	}
// 	//set all the other values to 0 T.C => O(n-nz)
// 	for(int i=nz;i<n;i++){
// 		arr[i]=0;
// 	}
// 	return arr;
// }
void pushZerosToEnd(int arr[],int n) {
        int j= -1;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                j =i;
            }break;
        }
        
        if(j=-1){
            return ;
            
        }
        
        for(int i= j+1;i<n;i++){
            if(arr[i]!=0){
                swap(arr[j],arr[i]);
                j++;
            }
       }    
    }

vector<int> intersection_brute(vector<int> &a,int m,vector<int> &b,int n){
	vector<int> ans;
	int vis[n]={0};

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if (a[i] == b[j] && vis[j] == 0)
			{
				ans.push_back(a[i]);
				vis[j] = 1;
				cout << "runs" << endl;
				break;
			}

			if(b[j]>a[i])break;
		}
	}
	return ans;
}
vector<int> intersection_optimal(vector<int> &a,int m,vector<int> &b,int n){
	int i=0;int j=0;
	vector<int> ans;
	while(i<m && i<n){
		// because of array being sorted
		if(a[i]<b[j]){
			i++;
		}
		else if(a[i]>b[j]){
			j++;
		}
		else{
			ans.push_back(a[i]);
			i++;
			j++;
		}
	}
	return ans;
}

int missing_num(int arr[],int N)
{
	int xor1=0,xor2 =0;
	int n = N-1; //bcz 1 element is missing so it goes till N-1
	for(int i=0;i<n;i++){
		xor2 = xor2^arr[i];
		xor1 =  xor1^(i+1);			
	}xor1 = xor1^N; // Mistake was doing this => xor^n
	return xor1^xor2;
}
//leet9
bool check_pallindrome(int i){
	int n,j=0,temp,len=1,find_size;
	temp=i;find_size=i;
	long rev_num=0;
	if(find_size>0){
		for(len=0;find_size>0;len++){
			find_size/=10;
		}
	}len--;
	while(temp>0){
		n = temp%10;
		rev_num += n*(pow(10,len));
		len--;
		temp = temp/10;
		cout<<"n"<<n<<"j"<<j<<"temp"<<temp << "rev"<< rev_num<<endl;
	}
	if(i == rev_num)
		return true;
	return false;
}
//leet7
int reverse_num(int i){
	int neg;
	if(i<0){
		i = -i;
		neg =1;
	}
	else neg=0;
	int min_int_value = INT_MIN;
	int max_int_value = INT_MAX;

	int n,j=0,temp,len=1,find_size;
	temp=i;find_size=i;
	long rev_num=0;
	if(find_size>0){
		for(len=0;find_size>0;len++){
			find_size/=10;
		}
	}len--;
	while(temp>0){
		n = temp%10;
		rev_num += n*(pow(10,len));
		len--;
		temp = temp/10;
		cout<<"n"<<n<<"j"<<j<<"temp"<<temp << "rev"<< rev_num<<endl;
	
	}
	if(neg==1){
		return -rev_num;
	}
	else
		return rev_num;

}
//2 sum striver_vid
//leetcode 
vector<int> twoSum(int n, int target,vector<int> nums){
	map<int,int> mpp;
	vector<int> v;	
	for(int i=0;i<nums.size();i++){		
		int a = nums[i];
		int more = target-a;
		if(mpp.find(more) != mpp.end()){
			v.push_back(mpp[more]);
			v.push_back(i);
			return v;
		}
		mpp[a]=i; 
		}
		return v;
}
// string read(int n,vector<int> book,int target){
// 	int left=0;
// 	int right=n-1;
// 	sort(a.begin(), a.end());
// 	while(right>left){
// 		int sum=book[left]+book[right];
// 		if(sum == target){
// 			return "YES";
			
// 		}
// 		else if(sum > t){
// 			right--;
// 		}
// 		else left++;
// 	}

// 	return "NO";
// }
void sortColors(vector<int> a){
	int n =a.size();
	int low=0,mid=0,high=n-1;
	for(int i=0;i<n;i++){
		if(a[mid] == 0) {swap(a[low],a[mid]);mid++;low++;}

		else if(a[mid]==1) {mid++;}

		else
			{swap(a[mid],a[high]);high--;}
	}
	for(auto it:a){
		cout << it << " ";
	}
}
int majorityElement(vector<int> a){
	int i=0,cnt=0,n=a.size(),el=a[0];

	for(i=0;i<n;i++){
		if(cnt==0){ cnt=1;el = a[i];}
		else if(a[i]==el) cnt++;
		else cnt--;
		cout << cnt ;
    }
    int cnt1 =0;
    for(int i=0;i<n;i++){
    	if(a[i]==el) cnt1++;
    }
    if(cnt1 >(n/2))return el;
    return -1;	
}
int maxSubArray(vector<int> a){
	int sum=0;
	int maxi=INT_MIN;
	for(int i=0;i<a.size();i++){
		sum+=a[i];
		maxi = max(sum,maxi);
		if(sum<0) sum=0;		
	}
	return maxi;
}
//best time to buy the stock
int maxProfit(vector<int> a){
	int maxProfit=0,mini=a[0],cost;
	for(int i=0;i<a.size();i++){
		cost=a[i]-mini;
		maxProfit = max(maxProfit,cost);
		mini = min(mini,a[i]);
		
	}
	return maxProfit; 
}
//26.10 Rearrange Array Elements by Sign
//leet 2149
vector<int> rearrangeArray(vector<int>& a){
	     int n = a.size();
        vector<int> ans(n, 0);
        int pos = 0, neg = 1;

        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                ans[pos] = a[i];
                pos = pos + 2;
            } else{
                ans[neg] = a[i];
                neg = neg + 2;}
        }
        return ans;
}
//leet31. Next Permutation
vector<int> nextPermutation(vector<int>& a){
	 int idx = -1, n = a.size();
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < a[i + 1]){
                idx = i;
                cout << idx;
                break;
                }        
        }
      	     if (idx == -1) {
            reverse(a.begin(), a.end());
            return a;
        }
        for (int i = n - 1; i > idx; i--) {
            if (a[i] > a[idx]) {
                swap(a[idx], a[i]);
                break;
            }
        }

        reverse(a.begin() + idx + 1, a.end());
        return a;

}
//leader problem
vector<int> leader(vector<int> a){
	vector<int> ans;
	int maxi=INT_MIN;
	int n = a.size();
	for(int i=n-1;i>=0;i--){
		if(a[i]>maxi){
		ans.push_back(a[i]);	
	}
		maxi = max(maxi,a[i]);
	}
	sort(ans.begin(),ans.end());
	return ans;
}
//longest consequent subsequence 29.10 (9.12am - 10:00am)
int longestsubsequence(vector<int>& a){
	int n=a.size();
	if(n==0) return 0;
	int longest=1;
	unordered_set <int> st;
	for(int i=0;i<n;i++){
		st.insert(a[i]);
	}
	for(auto it: st){
		if(st.find(it-1)==st.end()){
			int cnt=1;
			int x = it;
			while(st.find(x+1)!=st.end()){
				cnt = cnt+1;
				x=x+1;
			}
			longest = max(longest,cnt);
		}
	}
	return longest;
}
//need to revise
//restarting from 07 Nov 25 4:15am-
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




int main(){
	//brute longest subsequence 7.11

	vector<int> a;
	int x;
	while(cin>>x) a.push_back(x);
	cout << longsubs(a);
	//longest subsequence 29.10

	// vector<int> a;
	// int x;
	// while(cin>>x) a.push_back(x);
	// cout << longestsubsequence(a);

	//majority_Element
	// vector<int> a;
	// int x;
	// while(cin>>x) a.push_back(x);
	// cout << longestsubsequence(a);
	// for(auto it:print){
	// 	cout<< it << " ";
	// }

	//sort array with 0's,1's ans 2's
	// vector<int> a;
	// int x;int n;
	// while(cin>>x) a.push_back(x);
	//sortColors(a);

	//2 sum
	// int n;cin>>n;int target;cin>> target;
	// vector <int> arr;	//vector was taking target as an aaray too
	
	//take input for array
	// int x;
	// for(int i=0;i<n;i++){
	// 	cin>>x;
	// 	arr.push_back(x);
	// }
	// vector<int> ans = twoSum(n,target,arr);
	// if (ans.empty())
    //     cout << "No pair found\n";
    // else
    //     cout << ans[0] << " " << ans[1] << endl;
	
	//leetcodeque9 -->24.10
	// int i;cin>>i;
	// cout << reverse_num(i);

	//missing sum --> 23.10

	// int N;cin>>N;
	// int arr[N-1];
	// for(int i=0;i<N-1;i++){
	// 	cin >> arr[i];
	// }
	// cout << missing_num(arr,N);

	//intersection of 2 arrays

	// int m;cin >> m; int n; cin >>n;
	// vector<int> a;vector<int> b;

	//i was a dumbo to intialize the vector till m and n with 0 and then
	//push back the input of mine which gave me 00 ans 
	//+1 lesson learned

	// int x;
	// for(int i=0;i<m;i++){
	// 	cin>>x;
	// 	a.push_back(x);
	// }
	// for(int i=0;i<n;i++){
	// 	cin>>x;
	// 	b.push_back(x);
	// }
	// vector<int> res = intersection_optimal(a,m,b,n);
	// for(auto it:res){
	// 	cout << it << " ";
	// }

	// int n; cin>>n; 
	// // int a;
	// int arr[n];
	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }
	// cout << pushZerosToEnd(arr,n);
	// for(int i=0;i<n;i++){
    //         cout << arr[i];
    //     }
	// largest_element(arr,n);
	//----------------------->
	// vector<int> arr(n);
	// for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
	// vector<int> result = zerotoback(arr,n);
	// for (int x : result) {
    //     cout << x << " ";
    // }cout << endl;
	//--------------------------------->
	// for(int i=0;i<n;i++){
	// 	cout << arr[i] << " ";
	// }


	// rotbyd(arr,n,d);
	// leftrotateoptimus(arr,n,d);
	// cout << roate_byd(arr,n,d);
	// largest_element(arr,n);	
	// second_largest_better(arr,n);
	// second_largest_optimal(arr,n);
	// second_smallest(arr,n);
	// cout << "\n"<< issorted(arr,n);
	// cout << rmvdup(arr,n);
	// left_rotby1(arr,n);
	// cout << rotate_array(arr,n);
	return 0;
}