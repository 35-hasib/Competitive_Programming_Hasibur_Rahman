class Solution {
public:
    string convertToTitle(int n) {
        string s;
	char ch;
	while(n>0){
		n--;
		char ch = 65 + (n%26);
		s.push_back(ch);
		n/=26;
	}
	reverse(s.begin(),s.end());
	return s;
    }
};
