class Solution {
public:
    vector<double> convertTemperature(double c) {
        vector<double> a;
        a.push_back(c+273.15000);
        a.push_back(c*1.80 + 32.00000);
        return a;
    }
};
