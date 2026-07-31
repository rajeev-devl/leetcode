class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n/2;i++){
            mx = max(mx, nums[i]+nums[n-1-i]);
        }
        return mx;
    }
};