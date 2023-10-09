
//Power Of Exception Handle ..........................................

class Solution {
public:
    int reverse(int c) {
        string s;
        long long a;
        long long x = c;
        if(x<0){
            x *= -1;
            s = to_string(x);
            string b;
            for(int i=s.size()-1;i>=0;i--){
                b.push_back(s[i]);
            }
            a = stoll(b);
            if(a>INT_MAX){
                return 0;
            }
            return -1*a;
        }
        s = to_string(x);
        string b;
        for(int i=s.size()-1;i>=0;i--){
                b.push_back(s[i]);
            }
            a = stoll(b);
            if(a>INT_MAX){
                return 0;
            }
        return a;

    }
};
