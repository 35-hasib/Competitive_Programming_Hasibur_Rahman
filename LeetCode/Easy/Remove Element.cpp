class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    int removeElement(vector<int>& a, int f) {
        SpeedUpIO
        vector<int> v;
        int n = a.size();
        for(int i=0; i<n; i++){
            if(a[i] != f){
                v.push_back(a[i]);
            }
        }
        a.clear();
        for(auto i : v){
            a.push_back(i);
        }
        n = a.size();
        return n;
    }
};
