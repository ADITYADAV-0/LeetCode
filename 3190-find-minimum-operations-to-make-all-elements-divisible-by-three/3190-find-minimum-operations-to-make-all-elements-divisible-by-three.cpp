class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int m = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i]%3 != 0){
                m += 1;
            }
        } 
        return m;
    }
};