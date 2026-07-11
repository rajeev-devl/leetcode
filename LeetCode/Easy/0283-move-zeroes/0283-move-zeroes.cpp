class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int r = 0;
        int w = 0;
        while(r<n){
            if(nums[r]!=0){
                swap(nums[w],nums[r]);
                w++;
            }
            r++;
        }
        //return nums;

    }
};