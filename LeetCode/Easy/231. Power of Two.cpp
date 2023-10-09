class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return 0;
        }
        for(long i=1;i<=INT_MAX;i=i*2){
            if(i==n){
                return 1;
            }
        }
        return 0;
    }
};

//Binary Search.............
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int h = 31;
        int l = 0;
        int m=0;
        while(h-l > 1){
            m = (h+l)/2;
            if(pow(2,m)==n){
                return 1;
            }
            if(pow(2,m)>n){
                h=m;
            }
            else{
                l=m;
            }
        }
        return 0;
    }
};
