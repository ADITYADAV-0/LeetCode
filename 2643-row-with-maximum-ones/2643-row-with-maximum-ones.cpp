class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count = 0;
        int max = 0;
        int idx = 0;
        vector<int> ans;
        for (int i = 0; i< mat.size(); i++){
            for (int j = 0; j < mat[i].size(); j++){
                if (mat[i][j] == 1){
                    count++;
                }
            }
            if(count > max){
                max = count;
                idx = i;
            }
            count = 0 ;
        }
        ans.push_back(idx);
        ans.push_back(max);
        return ans;
    }
};