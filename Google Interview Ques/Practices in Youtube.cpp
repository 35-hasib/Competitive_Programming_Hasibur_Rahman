
/*Google Interview Ques.
	given an array of Length n. and sum.
	write a function to confirm this array have at lest one pair
	that sum of this pair is equal to given sum
	
	Ex: 1.  n = 4 , sum = 8
		   	a[1,2,3,9]	No
		2.  n = 4 , sum = 8
			a[1,2,4,4]	Yes
	that's it
*/ 
		
// Solution below...
// solution Function
#include <bits/stdc++.h>
using namespace std;

bool isPairWithSum(const vector<int>& a,int sum){
	unordered_set<int> comp;
	for(auto i : a){
		if(comp.find(i) != comp.end()){
			return 1;
		}
		comp.insert(sum-i);
	}
	return 0;
}
// Main function
int main(){
	int n;cin>>n;
	int sum;cin>>sum;
	vector<int> a;
	for(int i=0;i<n;i++){
		int j;cin>>j;
		a.push_back(j);
	}
	
	cout<<isPairWithSum(a,sum)<<endl;
	
}
