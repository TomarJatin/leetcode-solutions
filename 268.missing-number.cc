class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = size(nums) + 1;
        int sumToN = (n*(n-1))/2;
        int sumAllNums = 0;
        for (int i = 0; i < n-1; i++){
            sumAllNums += nums[i];
        }
        return sumToN - sumAllNums;
    }
};