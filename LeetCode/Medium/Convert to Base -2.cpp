class Solution {
public:
    string baseNeg2(int n) {
        if(n==0) return "0";
        string s;
        while(n){
            int a = n%(-2);
            if(a){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
            n/=-2;
            if(a==-1){
                n++;
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
