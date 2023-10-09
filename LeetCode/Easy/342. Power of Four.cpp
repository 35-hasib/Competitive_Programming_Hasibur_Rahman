class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1){
            return 0;
        }
        if(n==1){
            return 1;
        }
        while(n>1){
            if(n%4){
                return 0;
            }
            n/=4;
        }
        return 1;
    }
};
