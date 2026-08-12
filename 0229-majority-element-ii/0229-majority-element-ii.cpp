class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int rep = 1;
        vector<int> ans;
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int i = 1 ; i <= n ; i ++){
            if( i < n && nums[i] == nums[i-1] ){
                rep++;
            } else {
               if (rep > n / 3) {
                    ans.push_back(nums[i - 1]);
                }
                rep = 1;
            }
        }
        return ans;
    }
};