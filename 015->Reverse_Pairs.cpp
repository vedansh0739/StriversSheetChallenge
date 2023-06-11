class Solution {
public:
    int cnt=0;
   void merge(vector<int>&arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    long long left = low;      // starting index of left half of arr
    long long right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
    long long left1=left;long long right1=right;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
 while (left1 <= mid && right1 <= high) {
        if (arr[left1] <= (long long)arr[right1]*2) { 
            left1++;
        }
        else { 
            cnt+=mid-left1+1; 
            right1++;
        }
    }
    // if elements on the left half are still left //
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}
void mergeSort(vector<int>&arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid);  // left half
    mergeSort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}
    int reversePairs(vector<int>& nums) {
        cnt=0;
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return cnt;
    }
};
