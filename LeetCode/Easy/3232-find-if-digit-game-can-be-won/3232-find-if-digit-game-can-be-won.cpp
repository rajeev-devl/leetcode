class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();
        int singlesum =0;
        int doublesum = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]<=9){
                singlesum+=nums[i];
            }
            if(nums[i]>9){
                doublesum+=nums[i];
            }
        }
        if(doublesum>singlesum||singlesum>doublesum){
            return true;
        }
        return false;
    }
};