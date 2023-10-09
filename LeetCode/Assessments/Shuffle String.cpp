class Solution {
public:
    string restoreString(string s, vector<int>& a) {
        int n = a.size();
        vector<pair<int,char>> v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(a[i],s[i]));
        }
        sort(v.begin(),v.end());
        string c;
        for(auto i : v){
            c.push_back(i.second);
        }
        return c;
        
    }
};
