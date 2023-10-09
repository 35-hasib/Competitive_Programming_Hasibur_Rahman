class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        SpeedUpIO
        vector<int> c;
        int n = a.size();
        int m = b.size();
        set<int> x;
        set<int> y;
        for(int i=0; i<n; i++){
            x.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            y.insert(b[i]);
        }
        for(auto i : x){
            for(auto j : y){
                if(i==j){
                    c.push_back(i);
                }
            }
        }
        return c;
    }
};
