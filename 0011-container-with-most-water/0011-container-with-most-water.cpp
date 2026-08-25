class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int i=0;
        int j=height.size()-1;
        while(i<=j){
            int l = j-i;
            int b = min(height[i], height[j]);
            ans = max(ans, l*b);
            if(height[i]< height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};