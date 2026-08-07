class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int r ;
        while(n>0){
            r = (n%10);
            sum = (sum * (-1)) + r;
            n = n/10;
        }
        return sum;
    }
};