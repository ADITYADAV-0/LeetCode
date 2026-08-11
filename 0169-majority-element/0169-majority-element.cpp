class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()/2;
        std::sort(nums.begin(), nums.end());
        return nums[n];
    }
};