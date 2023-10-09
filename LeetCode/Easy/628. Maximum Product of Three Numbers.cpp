class Solution {
public:
    int maximumProduct(vector<int>& a) {
        sort(a.begin(),a.end());
        int n = a.size();
        int x = (a[0]*a[1]*a[n-1]);
        int y = (a[n-1]*a[n-2]*a[n-3]);
        return max({x,y});
    }
};
