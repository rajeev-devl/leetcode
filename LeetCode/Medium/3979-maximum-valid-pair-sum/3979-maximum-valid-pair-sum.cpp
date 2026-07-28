class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = nums[0];
        int result = 0;
        for(int i = k;i<n;i++){
            sum = max(sum,nums[i-k]);
            result = max(result,nums[i]+sum);
        }
        return result;
    }
};