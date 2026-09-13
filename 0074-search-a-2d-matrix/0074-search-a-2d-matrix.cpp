class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int r = matrix.size();
    int c = matrix[0].size();
    int low = 0;
    int high = (r*c);
        while(low < high){
            int mid = low + (high - low)/2;
            if(target == matrix[mid/c][mid%c]){
                return true;
            }
            if(target > matrix[mid/c][mid%c]){
                low = mid+1 ;
            }
            if(target < matrix[mid/c][mid%c]){
                high = mid;
            }

        }
        return false;
    }
};