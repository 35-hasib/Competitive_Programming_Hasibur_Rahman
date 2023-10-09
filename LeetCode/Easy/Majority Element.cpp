class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    int majorityElement(vector<int>& a) {
        SpeedUpIO
        sort(a.begin(),a.end());
        int n = a.size();
        return a[n/2];
    }
};
