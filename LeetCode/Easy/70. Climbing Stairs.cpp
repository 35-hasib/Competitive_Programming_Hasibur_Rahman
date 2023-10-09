class Solution {
public:
    int climbStairs(int n) {
        int a = 0, b = 1, c, i,d;
        n=n+1;
    
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++) {
        
		c = a + b;
		a = b;
		b = c;
        
        cerr<<b<<endl;
	}
	return b;
    }
};
