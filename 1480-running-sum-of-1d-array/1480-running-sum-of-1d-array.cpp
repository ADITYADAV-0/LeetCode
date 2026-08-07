class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        for(int a=0; a<nums.size();a++){
            sum = sum + nums[a];
            ans.push_back(sum);
        }
        return ans;
    }
};