class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int Size = nums.size();
        int x=0;
        for(int i=0;i<Size;i++){
            if(nums[i]!=0){
                int abc=nums[i];
                nums[i]=nums[x];
                nums[x]=abc;
                x++;
            }
        }
    }
};
