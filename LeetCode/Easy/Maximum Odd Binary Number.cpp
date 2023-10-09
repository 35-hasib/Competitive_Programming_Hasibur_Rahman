class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        if(s.size()==1) return "1";
        string a;
        int c = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') c++;
        }
        for(int i=0;i<c-1;i++){
            a.push_back('1');
        }
        for(int i=0;i<s.size()-c;i++){
            a.push_back('0');
        }
        a.push_back('1');
        return a;
    }
};
