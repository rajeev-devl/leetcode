class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = 1;

        while(r<n){
            if(nums[l]==nums[r]){
                return true;
            }
            l++;
            r++;
        }
        return false;
    }
};