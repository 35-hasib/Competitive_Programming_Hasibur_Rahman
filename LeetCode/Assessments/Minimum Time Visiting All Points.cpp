class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int n = p.size();
        int c = 0;
        for(int i=1;i<n;i++){
            int a = abs(p[i-1][0]-p[i][0]);
            int b = abs(p[i-1][1]-p[i][1]);
            c+=max(a,b);
        }
        return c;
    }
};
