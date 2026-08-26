
class Solution {
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

    int cntpairs(vector<int> &arr,int low,int mid,int high){
        int cnt =0;
        int right = mid+1;


        
        for(int i =low;i<=mid;i++){
        while (right <= high && (long long)arr[i] > 2LL * (long long)arr[right]) {
                right++;
            }
        

        cnt += right-(mid+1);}
        return (int)cnt;
    }

    int mergeSort(vector<int> &arr,int low,int high)
    {
        int cnt = 0;

        int mid =(low+high)/2;
        //if low > high exit

        if(low>=high) return cnt;


        //recursive call for left and right
        cnt +=mergeSort(arr,low,mid);

        cnt +=mergeSort(arr,mid+1,high);

        //check the condition and add in cnt
        //use function

        cnt += cntpairs(arr,low,mid,high);

        //to merge back

        merge(arr,low,mid,high);

        return cnt;

    }
    int reversePairs(vector<int>& arr) {
        
        return mergeSort(arr,0,arr.size()-1);
        
    }
};

int main()
{
    return 0;
}