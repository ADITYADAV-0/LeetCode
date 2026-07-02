class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        std::vector<int> newVector(nums.begin(), nums.end());
        std::vector<int> reversed(newVector.rbegin(), newVector.rend());
        newVector.insert(newVector.end(), reversed.begin(), reversed.end());
        return newVector ;
    }
};