class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i = 1;
        long long j = num;
        while (i<=j){
            long long mid = i + (j-i)/2;
            if(num/mid == mid && num % mid == 0){
                return true;
            }
            if(num/mid < mid){
                j = mid-1;
            }
            else{
                i = mid+1;
            }

        }
        return false;
    }
};