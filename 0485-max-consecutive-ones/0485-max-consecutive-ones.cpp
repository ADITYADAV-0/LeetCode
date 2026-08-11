class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1 = 0;
        int count = 0;
        for (int j=0; j<nums.size(); j++){
            if( nums[j] == 1 ){
                count++;
            } else {
                count = 0;
            }
            count1 = (count1 > count)? count1 : count;
        }
        return count1;
    }
};