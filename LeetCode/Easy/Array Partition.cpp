class Solution {
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0); // Power of SpeedUp
public:
    int arrayPairSum(vector<int>& a) {
        SpeedUpIO
        sort(a.begin(),a.end());
        int n = a.size();
        int c = 0;
        for(int i=1;i<n;i=i+2){
            int x = min(a[i],a[i-1]);
            c += x;
        }
        return c;
    }
};
