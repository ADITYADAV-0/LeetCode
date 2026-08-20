class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        int j=0;
        for(int i = 0; i < s.size(); i++){
            if (i>1 && j==2 && s[i]==s[i-1]){
                continue;
            }
            result +=s[i];

            if(i>0 && s[i] ==s[i-1]){
                j++;
            } else {
                j = 1;
            }
        }
        return result;
    }
};