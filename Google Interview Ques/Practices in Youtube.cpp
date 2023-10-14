 
/*
Given an array of integers numsand an integer target.

Write a function to confirm that this array have at lest one pair. Which pair of sum is equal to the target.

If any pair of array sum is equal to target return true . Otherwise return false.

 

Example 1:

Given nums = [1, 2, 4, 4], target = 8,
Because nums[2] + nums[3] = 4 + 4 = 8, return true .

Example 2:

Given nums = [1, 2, 3, 9], target = 8,
return false.

 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
Follow-up: Can you come up with an algorithm that is less than O(n2) or O(n*log(n)) time complexity? 
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
