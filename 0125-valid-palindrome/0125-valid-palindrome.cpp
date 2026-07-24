class Solution {
public:
    bool isPalindrome(string s) {
     s.erase(remove_if(s.begin(), s.end(), [](char c){return !isalnum(c);}), s.end());

     transform(s.begin(), s.end(),s.begin(),::tolower);
     int l=s.size()-1;
     bool is_palin=true;
     for(int i=0; i<l;i++){
        if(s[i] != s[l]){
            is_palin=false;
        }
        l -=1;
     }
     return is_palin;
    }
};