class Solution {
public:
    int scoreOfString(string s) {
        int sc = 0;
        int n = s.size();
        for(int i = 0 ; i < n - 1; i++){
            sc += abs(s[i] - s[i+1]);
        } 
        return sc;
    }
};