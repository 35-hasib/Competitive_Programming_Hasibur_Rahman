class Solution {
public:
    void reverseString(vector<char>& a) {
        int n = a.size();
        for(int i=0; i<n/2; i++){
            swap(a[i],a[n-1-i]);
        }
    }
};
