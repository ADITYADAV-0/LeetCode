class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int wealth = 0;
        for (int i = 0 ; i<accounts.size(); i++){
            for (int j = 0 ; j< accounts[i].size(); j++){
                wealth += accounts[i][j];           
            }
            if(max_wealth < wealth){
                    max_wealth = wealth;
            }
            wealth = 0;
        }
        return max_wealth;
    }
};