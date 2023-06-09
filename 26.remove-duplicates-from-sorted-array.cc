class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=0;
        while(j<nums.size()){
            while(j<nums.size()-1 && nums[j] == nums[j+1]) j++;
            swap(nums[i], nums[j]);
            i++; j++;
        }
        return i;
    }
};