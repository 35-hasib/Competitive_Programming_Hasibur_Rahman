class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    int thirdMax(vector<int>& a) {
        SpeedUpIO
        int n = a.size();
        map<int,int> m;
        for(int i=0;i<n;i++) {
            m[a[i]]++;
        }
        int ans = 0;
        n = m.size();
        if(n<3){
            int g = 0;
            for(auto i : m) {
                g = max(i.first,g);
            }
            return g;
        }
        n -= 2; //n=2
        for(auto i : m) {
            ans++;
            if(ans == n) return i.first;
        }
        return 0;
    }
};
