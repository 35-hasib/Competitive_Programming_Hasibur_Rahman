class Solution {
public:
    int sroot(int x){                       // sroot
    if (x == 1) {
        return x;
    }
    int l = 1;
    int h = x;
    while (h - l >1) {
        int m = l +(h-l) / 2;               //imp
        if (m <= x/m) {                     //imp
            l = m;
        } else {
            h = m;
        }
    }

    return l;
}
    bool isPerfectSquare(int n) {
        if(sroot(n)*sroot(n) == n){
            return 1;
        }
        return 0;
    }
};
