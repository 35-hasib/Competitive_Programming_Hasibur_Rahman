class Solution {
public:
    int titleToNumber(string s) {

        int n=0;
	    for(int i=0;i<s.size();i++){
		    int f = s[i] - 64;
		    if(i != s.size()-1){
			    n += f;
			    n *= 26;
		    }
		    else{
			    n +=f;
		    }
	    }
	return n;
    }
};
