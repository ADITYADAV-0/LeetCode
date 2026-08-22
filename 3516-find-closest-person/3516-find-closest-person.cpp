class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (fabs(x-z)>fabs(y-z)){
            return 2;
        } else if (fabs(x-z)<fabs(y-z)){
            return 1;
        }
        return 0;
    }
};