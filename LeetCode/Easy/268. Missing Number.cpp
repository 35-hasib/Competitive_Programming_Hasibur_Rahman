class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size()+1;
        int m = (n-1)*n/2;
        int s = 0;
        for(int i=0;i<n-1;i++){
            s += a[i];
        }
        return m - s;
    }
};
