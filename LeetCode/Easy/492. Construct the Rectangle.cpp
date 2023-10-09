class Solution {
public:
    vector<int> constructRectangle(int a) {
        vector<int> v;
        int w = 1;
        for(int i=1;i<=sqrt(a);i++){
            if(!(a % i)){
                w = i;
            }
        }
        v.push_back(a/w);
        v.push_back(w);
        return v;
    }
};
