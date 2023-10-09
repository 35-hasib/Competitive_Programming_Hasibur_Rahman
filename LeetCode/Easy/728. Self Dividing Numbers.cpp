class Solution {
public:
bool isValid(int n){
    int a=n;
    while(n){
        if(n%10==0) return 0;
        if(a%(n%10)){
            return 0;
        }
        n/=10;
    }
    return 1;
}
    vector<int> selfDividingNumbers(int l, int h) {
        vector<int> a;
        for(int i=l;i<=h;i++){
            if(isValid(i)){
                a.push_back(i);
            }
        }
        return a;
    }
};
