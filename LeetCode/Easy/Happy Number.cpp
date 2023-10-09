class Solution {
public:
    bool isHappy(int n) {
        int c = 0;
        while(1){
            if(n==1 || n==7) return 1;
            if(n==2 || n==3 || n==4 || n==5 || n==6 || n==8 || n==9) return 0;
            c = n;
            n = 0;
            while(c){
                n += (c%10)*(c%10);
                c/=10;
            }
        }
        return 0;
    }
};
