class Solution {
public:
    bool canWinNim(int n) {
        if(n%4){
            return 1;
        }
        return 0;
    }
};
