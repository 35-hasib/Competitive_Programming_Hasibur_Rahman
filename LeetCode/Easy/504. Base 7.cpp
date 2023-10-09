class Solution {
public:
    string convertToBase7(int n) {
	    if(n==0) return "0";
	    int x = n;
	
	    if(n<0){
		    n*=-1;
	    }
        string s;
        while(n){
            if(n%7){
                int a = n%7;
                char c = 48 + a;
                
                s.push_back(c);
            }
            else s.push_back('0');
            n/=7;
        }
        if(x<0){
        	s.push_back('-');
        	reverse(s.begin(),s.end());
        	return s;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
