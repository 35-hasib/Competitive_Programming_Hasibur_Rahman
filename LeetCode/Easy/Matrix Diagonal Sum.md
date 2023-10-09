```cpp
class Solution {
public:
#define SpeedUpIO ios_base::sync_with_stdio(false); cin.tie(0);
    int diagonalSum(vector<vector<int>>& a) {
        SpeedUpIO
        int sum = 0;
        int n = a.size();
        for(int i=0;i<n;i++){
            sum += a[i][i];
            if(i+i == i+n-1-i) continue;
            sum += a[i][n-1-i];
        }
        return sum;
    }
};
```
