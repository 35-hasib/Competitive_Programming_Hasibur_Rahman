class Solution {
public:
    int arrangeCoins(int n) {
        int h = n;
        int l = 1;
        long s = 0;
        while(h-l > 1){
            long m = l + (h-l)/2;
            s = (m+1)*m/2;
            if(s == n) return m;

            if(s > n) h = m;
            else l = m;
        }
        return l;
    }
};
