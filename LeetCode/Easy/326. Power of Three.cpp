class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1){
            return 0;
        }
        if(n==1){
            return 1;
        }
        while(n>1){
            //cerr<<n<<endl;
            if(n%3){
                return 0;
            }
            n/=3;

        }
        return 1;
    }
};
