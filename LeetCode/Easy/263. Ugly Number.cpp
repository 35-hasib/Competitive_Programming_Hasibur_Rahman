class Solution {
public:
    bool isUgly(int n) {
        if(n < 1) return 0;

        vector<int> u = {2,3,5};
        for(auto i : u){
            while(!(n%i)){
                n/=i;
            }
        }
        return 1 == n;

    }
};
