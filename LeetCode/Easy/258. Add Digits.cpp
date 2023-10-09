class Solution {
public:
    int addDigits(int n) {
        while(n){
            int s=0;
            int c=0;
            while(n){
                s += n%10;
                n/=10;
                c++;
            }
            n=s;
            if(c==1){
                return s;
            }
            
        }
        return 0;
    }
};
