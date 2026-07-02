class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = std :: accumulate(nums.begin(), nums.end(), 0);
        int minoperator = sum%k;
        return minoperator;
    }
};