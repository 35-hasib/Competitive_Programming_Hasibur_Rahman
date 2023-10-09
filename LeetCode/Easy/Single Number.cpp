class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    int singleNumber(vector<int>& a) {
        SpeedUpIO
        int f;
        int n = a.size();
        if(n==1) return a[0];
        map<int,int> m;
        for(int i=0; i<n; i++){
            m[a[i]]++;
        }
        for(auto i : m){
            if(i.second == 1){
                return i.first;
            }
        }
        return 0;
    }
};
