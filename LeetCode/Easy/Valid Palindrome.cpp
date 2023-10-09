class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    bool isPalindrome(string s) {
        SpeedUpIO
        string a;
        int n = s.size();
        for(int i=0; i<n; i++){
            if((s[i] >= 'a' && s[i]<='z') || (s[i] >= 'A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                a.push_back(s[i]);
            }
        }
        n = a.size();

        transform(a.begin(), a.end(), a.begin(), ::tolower);

        string b;
        for(int i=n-1; i>=0; i--){
            b.push_back(a[i]);
        }
        if(a==b){
            return 1;
        }
        return 0;
    }
};
