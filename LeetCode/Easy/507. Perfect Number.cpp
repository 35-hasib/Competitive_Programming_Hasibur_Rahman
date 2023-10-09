class Solution {
public:

    vector<int> divisor(int n){
        vector<int> a;
        for(int i=1;i<=n/2;i++){
            if(!(n%i)){
                a.push_back(i);
            }
        }
        return a;
    }

    bool checkPerfectNumber(int n) {
        vector<int> a = divisor(n);
        int s =0;
        for(auto i : a){
            s+=i;
        }
        if(s==n) return 1;
        return 0;
    }
};
