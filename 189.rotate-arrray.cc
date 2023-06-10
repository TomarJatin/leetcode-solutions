class Solution {
public:
    
    void reverse(vector<int> &nums, int start, int end){
        while(start <= end){
            swap(nums[start], nums[end]);
            start++, end--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if((k==0) || (n==1) || (k==n)) return;
        k=k%n;
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-k-1);
        reverse(nums, 0, n-1);
    }
};