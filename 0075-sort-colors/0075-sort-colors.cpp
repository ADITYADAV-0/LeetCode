class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0;
        int white = 0;
        int blue = 0;
        for ( int i = 0 ; i <nums.size() ; i++){
            if(nums[i] == 0){
                red++;
            }
            if(nums[i] == 1){
                white++;
            }
            if(nums[i] == 2){
                blue++;
            }
        }
        nums.clear();
        nums.insert(nums.begin(),red, 0);
        nums.insert(nums.end(), white, 1);
        nums.insert(nums.end(), blue, 2);
    }
};